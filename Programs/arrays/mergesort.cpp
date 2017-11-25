#include <bits/stdc++.h>

using namespace std;

void merge(int *arr, int beg, int mid, int end)
{
    if(beg < end)
    {
        int i,j,k;
        int llen = mid-beg+1;
        int rlen = end-mid;
        int left[llen];
        int right[rlen];
        int len = end-beg+1;
        
        for(int i=beg; i<mid+1; i++)
            left[i-beg] = arr[i];
        for(int i=mid+1; i<end+1; i++)
            right[i-mid-1] = arr[i];
            
        i=0; j=0; k=beg;
        while(i<llen && j<rlen)
        {
            if(left[i] < right[j])
            {
                arr[k] = left[i];
                i++;
            }
            else
            {
                arr[k] = right[j];
                j++;
            }
            
            k++;
        }
        
        while(i<llen)
        {
            arr[k] = left[i];
            k++; i++;
        }
        
        while(j<rlen)
        {
            arr[k] = right[j];
            k++; j++;
        }
        
    }
}

void merge_sort(int *arr, int beg, int end)
{
    if(beg < end)
    {
        int mid = (beg+end)/2;
        merge_sort(arr, beg, mid);
        merge_sort(arr, mid+1, end);
        merge(arr, beg, mid, end);
    }
}

int main()
{
    int arr[15] = {3,44,38,5,47,15,36,26,27,2,46,4,19,50,48};
    merge_sort(arr, 0, 14);
    for(int i=0; i<15; i++)
        cout << arr[i] << " ";
}
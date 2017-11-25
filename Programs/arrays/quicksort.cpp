/*
@file   program to implement quick sort
*/
#include <bits/stdc++.h>
using namespace std;
/*
@func   returns position of the pivot i.e left to pivot, ele <= pivot and right to pivot
        ele >pivot
@param  arr:    the array(subarray) to be pivoted
        beg,end:    the beginning and ending indices of the subarray
@return int:    pivot index
*/
int partition(int *arr, int beg, int end)
{
    int pindex = beg;
    int pivot = arr[end];
    for(int i=beg; i<end; i++)
    {
        if(arr[i]<=pivot)
        {
            swap(arr[i], arr[pindex]);
            pindex++;
        }
    }
    swap(arr[pindex], arr[end]);
    return pindex;
}

void quick_sort(int *arr, int beg, int end)
{
    if(beg < end)
    {
        int pindex = partition(arr, beg, end);
        quick_sort(arr, beg, pindex-1);
        quick_sort(arr, pindex+1, end);
    }
}

int main()
{
    int arr[5] = {1,3,4,5,2};
    quick_sort(arr, 0, 4);
    for(int i=0; i<5; i++)
        cout << arr[i] << " ";
}
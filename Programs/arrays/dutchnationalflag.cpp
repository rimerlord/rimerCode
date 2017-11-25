#include <bits/stdc++.h>
using namespace std;

#define DEBUG 0
#if DEBUG
#define LOG(msg, ...) printf(msg, ##__VA_ARGS__); cout<<endl;
#else
#define LOG(msg, ...)
#endif

int main()
{
    int tcase;
    cin>>tcase;
    for(int i=0; i<tcase; i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int j=0; j<n; j++)
        {
            cin>>arr[j];
        }
        
        int low, mid, high;
        low=0;
        mid=0; high=n-1;
        
        while(mid<=high)
        {
            switch(arr[mid])
            {
                case 0: LOG("Current index is %d and element is %d, To be swapped with %d", mid, arr[mid], arr[low]);
                        swap(arr[mid], arr[low]);
                        low++; mid++;
                        break;
                
                case 1: LOG("Current index is %d and element is %d", mid, arr[mid]);
                        mid++;
                        break;
                        
                case 2: LOG("Current index is %d and element is %d, To be swapped with %d", mid, arr[mid], arr[high]);
                        swap(arr[mid], arr[high]);
                        high--;
                        break;
            }
        }
        
        for(int j=0; j<n; j++)
            cout << arr[j] << " ";
        cout<<endl;
    }
}
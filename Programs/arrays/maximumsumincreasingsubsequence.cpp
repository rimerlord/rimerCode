#include <bits/stdc++.h>

using namespace std;

#define DEBUG 0

#if DEBUG
#define LOG(msg, ...) printf(msg, ##__VA_ARGS__); cout<< endl;
#else
#define LOG(msg, ...)
#endif

int maxsumincsubseq(int arr[], int n)
{
    int lookup[n];
    //lookup[0] = arr[0];
    int maxsofar=arr[0];
    int temp;
    
    for(int i=0; i<n; i++)
    {
        lookup[i] = arr[i];
        LOG("Assigned lookup[%d] = %d", i, lookup[i]);
        for(int j=0; j<i; j++)
        {
            if(arr[i] > arr[j])
            {
                lookup[i] = max(lookup[i], lookup[j]+arr[i]);
                LOG("Assigned lookup[%d] = %d for j=%d", i, lookup[i], j);
            }
            maxsofar = max(lookup[i], maxsofar);
            LOG("Assigned maxsofar = %d", maxsofar);
        }
    }
    
    return maxsofar;
}

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
            cin>>arr[j];
        cout << maxsumincsubseq(arr, n) << endl;
    }
}
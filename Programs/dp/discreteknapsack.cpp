#include <bits/stdc++.h>
using namespace std;

#define LLI long long int
LLI** lookup;

int dknorep(int w, int n, int* arr)
{
    for(int i=0; i<w; i++)
        lookup[0][i] = 0;
    for(int i=0; i<n; i++)
        lookup[i][0] = 0;
    
    for(int i=1; i<n; i++)
        for(int j=1; j<w; j++)
        {
            if(arr[i] <= j)
            {
                lookup[i][j] = max(lookup[i-1][j-arr[i]] + arr[i], lookup[i-1][j]);
            }
            
            else
                lookup[i][j] = lookup[i-1][j];
        }
        
    return lookup[n-1][w-1];
}

int main()
{
    LLI w;
    int n;
    cin>>w>>n;
    lookup = (LLI**)malloc(n*sizeof(LLI*));
    for(int i=0; i<n; i++)
        lookup[i] = (LLI*)malloc(w*sizeof(LLI));
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout << dknorep(w, n, arr);
}
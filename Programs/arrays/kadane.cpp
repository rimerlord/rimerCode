#include <bits/stdc++.h>

using namespace std;

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
        int max_here = arr[0];
        int max_so_far = arr[0];
        for(int j=1; j<n; j++)
        {
            max_here = max(max_here + arr[j], arr[j]);
            //cout<<max_here<<"xx";
            max_so_far = max(max_here, max_so_far);
            //cout<<max_so_far<<"yy";
        }
        cout << max_so_far << "\n";
    }
}
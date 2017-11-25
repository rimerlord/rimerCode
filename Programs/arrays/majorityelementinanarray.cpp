//majority element using moore's voting algorithm
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
            cin>>arr[j];
        
        int count=1;
        int candidate=arr[0];
        for(int j=1; j<n; j++)
        {
            if(candidate == arr[j])
            {
                count++;
                candidate = arr[j];
            }
            else
                count--;
        }
        
        if(count > 0)
            cout << candidate << endl;
        else
            cout << "NO Majority Element" << endl;
    }
}
#include <bits/stdc++.h>

using namespace std;

bool compare(int a, int b)
{
    string a1 = to_string(a);
    string b1 = to_string(b);
    string a2 = a1+b1;
    string b2 = b1+a1;
    int a3 = stoi(a2);
    int b3 = stoi(b2);
    return a3 > b3;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n, compare);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i];
    }
}
#include <bits/stdc++.h>
using namespace std;
//Fractional knapsack - greedy algorithm

struct Item
{
    int val;
    int weight;
    double unitval;
};

bool compare(Item i1, Item i2)
{
    if(i1.weight!=0 && i2.weight!=0)
        return i1.unitval < i2.unitval;
}

int main()
{
    int n, knapweight;
    cin>>n>>knapweight;
    int i=0;
    Item arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i].val>>arr[i].weight;
        if(arr[i].weight!=0)
            arr[i].unitval = (double)arr[i].val/arr[i].weight;
        //cout<<arr[i].unitval<<"\n";
    }
    
    sort(arr, arr+n, compare);
    double knapval=0;
    int a;
    for(i=n-1; i>=0; i--)
    {
        if(!knapweight)
            break;
        a = min(arr[i].weight, knapweight);
        knapweight -= a;
        knapval += a*arr[i].unitval;
    }
    cout << fixed << setprecision(4)<<knapval;
}
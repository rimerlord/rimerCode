#include <bits/stdc++.h>
using namespace std;
//Changing money - Greedy algorithm
int main()
{
    int mon;
    cin>>mon;
    int arr[] = {1,5,10};
    int i=2;
    int coins=0;
    while(i>=0)
    {
        if(mon==0)
            break;
        else
        {
            coins += (mon/arr[i]);
            mon %= arr[i];
            i--;
        }
    }
    cout << coins;
}
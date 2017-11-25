#include <bits/stdc++.h>

using namespace std;
//greedy algorithm - maximise prize candy distribution

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    int mincandy = 1;
    while(n>0)
    {
        n -= mincandy;
        if(n>=0)
            {
                v.push_back(mincandy);
                mincandy++;
            }
        else
            {
                v.back() += (n+mincandy);
            }
    }
    
    cout << v.size()<<"\n";
    for(auto it = v.begin(); it!= v.end(); it++)
    {
        cout << *it <<" ";
    }
}
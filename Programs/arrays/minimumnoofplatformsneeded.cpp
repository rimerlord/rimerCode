//Minimum number of platforms needed
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
        int arr[n]; int dep[n];
        
        for(int j=0; j<n; j++)
        {
            cin>>arr[j];
        }
        
        for(int j=0; j<n; j++)
        {
            cin>>dep[j];
        }
        
        priority_queue<int, vector<int>, greater<int>> pq;
        int maxplat=1;
        pq.push(dep[0]);
        int platform = 1;
        
        for(int j=0; j<n; j++)
        {
            while(!pq.empty() && pq.top() <= arr[j])
            {
                pq.pop();
                platform--;
            }
            pq.push(dep[j]);
            platform++;
            maxplat = max(maxplat, platform);
        }
        
        cout << maxplat << endl;
    }
}
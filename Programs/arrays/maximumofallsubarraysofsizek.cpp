#include <bits/stdc++.h>
using namespace std;

#define DEBUG 0
#if DEBUG
#define LOG(msg, ...) printf(msg, ##__VA_ARGS__); cout<<endl;
#else
#define LOG(msg, ...)
#endif
/**/

int main()
{
    int tcase;
    cin>>tcase;
    for(int i=0; i<tcase; i++)
    {
        int n,k;
        cin>>n>>k; 
        deque<pair<int, int>> dq;
        int arr[n];
        
        for(int j=0; j<n; j++)
        {
            cin>>arr[j];
        }
        
        for(int j=0; j<n; j++)
        {
            LOG("Index %d", j);
            if(dq.empty())
            {
                LOG("Deque is empty, pushing %d", arr[j]);
                dq.push_back(make_pair(j, arr[j]));
            }
            else
            {
                if(j - dq.front().first == k)
                {
                    LOG("1st and last element belong to different subarray, popping %d", dq.front().second);
                    dq.pop_front();
                    
                }
                while(!dq.empty() && dq.back().second < arr[j])
                {
                    LOG("Preceding elements are smaller than new element, removing them");
                    dq.pop_back();
                }
                LOG("Pushing %d", arr[j]);
                dq.push_back(make_pair(j, arr[j]));
                if( j >= k-1)
                    cout << dq.front().second << " ";
            }
        }
        cout << endl;
    }
}
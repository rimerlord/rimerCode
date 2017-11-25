#include <bits/stdc++.h>
using namespace std;

//greedy algorithm
//minimising no. of visits to take signatures from tenants
struct Seg
{
  int first;
  int second;
};

bool compare(Seg s1, Seg s2)
{
    return s1.second < s2.second;
}

stack<int> min_visits(Seg arr[], int n)
{
    stack<int> st;
    int i=0;
    while(i<n)
    {
        if(!st.empty())
        {
            if(st.top() <=arr[i].second && st.top() >= arr[i].first)
                i++;
            else
            {    
                st.push(arr[i].second);
                i++;
            }
        }
        
        else
        {   
            st.push(arr[i].second);
            i++;
        }
    }
    
    return st;
}

int main()
{
    int n;
    cin>>n;
    Seg arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i].first>>arr[i].second;
    }
    sort(arr, arr+n, compare);
    stack<int> s = min_visits(arr, n);
    int len = s.size();
    cout << len << "\n";
    for(int i=0; i<len; i++)
    {
        cout << s.top()<<" ";
        s.pop();
    }
}
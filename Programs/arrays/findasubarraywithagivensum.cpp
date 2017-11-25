#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcase;
    cin>>tcase;
    for(int i=0; i<tcase; i++)
    {
        int n, sum;
        cin>>n>>sum;
        int arr[n];
        for(int j=0; j<n; j++)
        {
            cin>>arr[j];
        }
        int flag = 0;
        int start=0;
        int end=0;
        int sum_local = 0;
        while(end<n)
        {
            sum_local+=arr[end];
            if(sum < sum_local)
            {
                start++;
                end=start;
                sum_local = 0;
            }
            
            else if(sum_local == sum)
            {
                flag=1;
                break;
            }
            
            else
                end++;
        }
        if(flag)
            cout << start+1 << " " << end+1 << "\n";
        else
            cout <<-1<<"\n";
    }
}
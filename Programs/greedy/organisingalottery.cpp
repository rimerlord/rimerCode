#include <bits/stdc++.h>
using namespace std;

/*
'l', 'r', 'p' stand for left, right, and point. 
Let me give you are toy example. 
Assume that we are given three points x1=5,x2=8,x3=3 
and two segments [a1,b1]=[4,10],[a2,b2]=[2,6]. 
We then create the following list:

(5,p),(8,p),(3,p),(4,l),(10,r),(2,l),(6,r)
Let's sort it now:

(2,l),(3,p),(4,l),(5,p),(6,r),(8,p),(10,r)
Now, let's scan it from left to right. 
Now we want to know how many segments contain x1=5.
First search (5,p) in log(n) time, then start scanning left to it.
On the left take each l as 1, r as -1 and p as 0.
Sum them all and you have lsum = 2.
Similarly rsum = -2.
lsum = rsum, means this point has 2 points on left, 2 points on right,
thus we have total 2 segments that contain it.
a formula for the answer = min(abs(lsum), abs(rsum))
*/

struct Entity
{
    int p;
    char desc;
    int seg;
};

bool compare(Entity e1, Entity e2)
{
    return e1.p < e2.p;
}

int calc_seg(Entity* e_arr, int index, int end)
{
    if(e_arr.desc != 'p')
        return -1;
    e_arr[index].seg = 0;
    int lsum=0;
    int rsum=0;
    
    for(int i=1; i<index-i>=0 && index+i<=end; i++)
    {
        if(e_arr[index-i].desc == 'l')
            lsum++;
        else if(e_arr[index-i].desc == 'r')
            lsum--;
        else if(e_arr[index+i].desc == 'l')
            rsum++;
        else if(e_arr[index+i].desc == 'r')
            rsum--;
    }
    
    return min(abs(lsum), abs(rsum));
}

int main()
{
    int s,p;
    cin>>s>>p;
    Entity arr[p+2s];
    int arr_p[p];
    for(int i=0; i<2s; i++)
    {
        cin>>arr[i].p;
        arr[i].desc = 'l';
        arr[i].seg = -1;
        i++;
        cin>>arr[i].p;
        arr[i].desc = 'r';
        arr[i].seg = -1;
        
    }
    
    for(int i=2s; i<(2s+p); i++)
    {
        cin>>arr[i].p;
        arr_p[2s-i] = arr[i].p;
        arr[i].desc = 'p';
        arr[i].seg = -1;
        
    }
    
    sort(arr, arr+p+2s, compare);
    int index;
    for(int i=0; i<p+2s; i++)
    {
        arr_p[i].seg = calc_seg(arr_p, i, n-1);
    }
    
    for(int i=0; i<p; i++)
    {
        int index = binary_search(arr, arr+p+2s, arr_p[i]);
        cout<<arr[index].seg<<" ";
    }
    
}
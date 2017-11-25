#include <bits/stdc++.h>
using namespace std;

#define LLI long long int
LLI* lookup;

LLI PrimCalc(LLI n)
{
    if(lookup[n-1]!=-1)
        return lookup[n-1];
    if(n==1)
        return 0;
    
    if(n<1)
    {
        cout << "n can't be negative"<<"\n";
    }
    
    int num_op = 0;
    LLI div3, div2, sub1;
    div3 = 0;
    sub1 = 0;
    div2 = 0;
    
    num_op++;
    if(n%3==0)
        div3 = PrimCalc(n/3);
    else
        div3 = n;
    if(n%2==0)
        div2 = PrimCalc(n/2);
    else
        div2 = n;
    sub1 = PrimCalc(n-1);
    num_op += min(div3, min(div2, sub1));
    
    lookup[n-1] = num_op;
    return num_op;
}

int main()
{
    LLI n;
    lookup = (LLI*)malloc(n*sizeof(LLI));
    
    for(LLI i=0; i<n; i++)
        lookup[i] = -1;

    cin>>n;
    cout << PrimCalc(n);
}
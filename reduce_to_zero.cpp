#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    while (n!=0)
    {
        if(n % 2==0)
        {
            n=n / 2;
        }
        else
        {
            n=n-1;
        }
    
        count++;
    }
    cout<<count;
}
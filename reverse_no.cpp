#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,rev=0,rem;
    cin>>n;
    while (n!=0)
    {
        rem=n%10;
        rev=10*rev+rem;
        n=n/10;
    }
    cout<<rev;
    
}
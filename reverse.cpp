#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,q,p,s;
    cout<<"enter a num";
    cin>>n;
    r=n % 10;
    q=n/10;
    p=q % 10;
    s= r*10+p;
    cout<< s;
}
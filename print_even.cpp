#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    i=1;
    cout<<"enter the value of n";
    cin>>n;
    while (i<=n)
    {
        if(i % 2==0)
        cout<<i<<endl;   
        i++;     
    }
    return 0;
}
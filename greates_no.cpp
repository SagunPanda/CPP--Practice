#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter 3 no"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b && a>c)
    {
        cout<<a;
    } 
    else if(b>a && b>c)
    {
        cout<<b;
    }  
    else
    {
        cout<<c;
    } 

}
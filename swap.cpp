//swapping 2 no using 3rd variable
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c ;
    cout<<"enter two no for swap"<<endl;
    cin>>a;
    cin>>b; 
    //a=5 b=6 c=a a=b b=c
    c=a;
    a=b; 
    b=c; 
    cout<<"after swapping "<< a << " "<< b;
    

}
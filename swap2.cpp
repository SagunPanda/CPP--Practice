//swapping no without using 3rd variable
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //a=5 b=6 
    //a=a+b=11 b=a-b=5 a=a-b=6
    int a , b; 
    cout<<"no for swapping"<<endl;
    cin>>a;
    cin>>b;
    a=a+b; 
    b=a-b; 
    a=a-b; 
    cout<<"no after swapping "<< a <<" " <<b;
    return 0;

}
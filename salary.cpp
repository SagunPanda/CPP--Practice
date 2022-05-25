#include<bits/stdc++.h>
using namespace std;
int main()
{
    int bsal,HRA,DA,gsal;
    cout<<"enter your salary";
    cin>>bsal;
    if(bsal<1500)
    {
        HRA=bsal*10/100;
        DA=bsal*90/100;
    }
    else
    {
        HRA=500;
        DA=bsal*90/100;
    }
    gsal=bsal+HRA+DA;
    cout<<gsal;
    
    return 0;

}
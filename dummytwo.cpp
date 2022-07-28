#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,rem,rev=0;
    cout<<"enter a number";
    cin>>n;
    while(n != 0)
    {
        rem= n % 10;
        n = n / 10;
        rev= rev* 10+ rem;
    }
    cout<<rev;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    int arr[n];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int large=arr[0];
    for(i=1;i<n;i++)
    {
        if(large<arr[i])
        {
            large=arr[i];
        }
        
    }
     cout<<large;
}
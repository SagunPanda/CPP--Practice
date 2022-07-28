#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter size of an array";
    cin>>n;
    int arr[n];
    cout<<"enter your element";
    int large=arr[0];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"array is"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" "; 
        if(large<arr[i+1])
        {
            large=arr[i+1];
           
        }
         
    }
    cout<<endl;
    cout<<"largest value is  "<<large;
    
}
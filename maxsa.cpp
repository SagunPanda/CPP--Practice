#include<bits/stdc++.h>

using namespace std;
int maxsa(int arr[],int n){
    int res=arr[0];
    for(int i=0;i<n;i++){
        int curr=0;
        for(int j=i;j<n;j++){
            curr=curr+arr[i];
            res=max(curr,res);
        }
    }return res;
}
int main(){
     int n,r;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    r=maxsa(arr,n);
    cout<<r<<endl;
    return 0;
}
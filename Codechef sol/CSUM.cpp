#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n,k,sum=0;cin>>n>>k;
        int arr[n],val,x=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>k){
                i--;
                n--;
            }
        }
        sort(arr,arr+n);
        for(int j=0;(j<n-1)&& x==0;){
            if(arr[j]+arr[n-1]==k)
                x++;
            else if(arr[j]+arr[n-1]>k)
                n--;
            else if(arr[j]+arr[n-1]<k)
                j++;
        }
        if(x>=1)
            cout<<"YES \n";
        else
            cout<<"NO \n";
    }
}

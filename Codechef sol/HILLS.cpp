#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n,u,d;cin>>n>>u>>d;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int i=0;
        for(;i<n-1;){
            if(arr[i+1]>arr[i] && arr[i+1]-arr[i]<=u ){
                i++;
            }
            if(arr[i+1]<arr[i] && arr[i]-arr[i+1]<=d){
                i++;
            }
            else if(arr[i+1]<arr[i] && arr[i]-arr[i+1]>d){
                i++;
                break;
            }
            else if(arr[i+1]>arr[i] && arr[i+1]-arr[i]>u)
                break;
        }
        cout<<i<<"\n";
    }
}

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ull n,sum=0;cin>>n;
    ull arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            sum+=arr[i]-arr[i+1];
            arr[i+1]=arr[i];
        }
    }
    cout<<sum;
}

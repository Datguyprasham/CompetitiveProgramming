#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n]={0};
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int freq[1002];
        for(int i=0;i<n;i++){
            freq[arr[i]]++;
        }
    }
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int arr[26]={0};
    for(int i=0;i<n;i++){
        arr[s[i]-97]++;
    }
    int flag=0;
    for(int i=0;i<26;i++){
        if(arr[i]>k){
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<"NO";
    else
        cout<<"YES";

}

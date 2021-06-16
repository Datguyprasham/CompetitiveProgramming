#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n,k;cin>>n>>k;
    int arr[k];
    for(int i=0;i<k;i++){
        cin>>arr[i];
    }
    set<int>s(arr,arr+k);
    int len=s.size();
    if(n-len==1)
        cout<<"YES";
    else
        cout<<"NO";

}

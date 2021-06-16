#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t,n,k;cin>>t;
    while(t--){
        cin>>n>>k;
        int sum=0,ptr=0,a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        for(int i=0;i<n;i++){
            sum+=a[i];
            if(sum<=k){
                continue;
            }
            else{
                ptr++;
                sum=0;
            }
        }
        cout<<ptr<<"\n";
    }
}

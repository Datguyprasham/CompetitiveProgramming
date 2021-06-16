#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

#include <bits/stdc++.h>
using namespace std;


void solve(){
    int tc,n,x,cnt;cin>>tc;
    while(tc>0){
        cnt=0;
        cin>>n>>x;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        reverse(b,b+n);
        for(int i=0;i<n;i++){
            if(a[i]+b[i]>x){
                cnt++;
            }

        }
        if(cnt==0){cout<<"YES \n";}
        else{cout<<"NO \n";}
        tc--;
    }
}

int main(){
    solve();
    return 0;
}

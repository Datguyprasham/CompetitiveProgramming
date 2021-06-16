#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

#include <bits/stdc++.h>
using namespace std;



void solve(){
    int tc,a,b,c,d,sum1,sum2;cin>>tc;
    while(tc>0){
        sum1=0;
        sum2=0;
        cin>>a>>b>>c>>d;
        sum1=a+b;
        sum2=c+d;
        cout<<max(sum1,sum2)<<"\n";
        tc--;

    }
}

int main(){
    solve();
    return 0;
}

#include <iostream>
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int32_t main(){
    int n,m,c;cin>>n>>m>>c;
    ll suml=0,sumr=0;
    while(n--){
        ll x,y,p;
        cin>>x>>y>>p;
        if(y>(m*x+c))
            suml+=p;
        else
            sumr+=p;
    }

    cout<<max(suml,sumr)<<"\n";

}

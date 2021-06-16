#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;
typedef vector<int> vi;
typedef vector<long long int> vlli;

#define pb push_back
#define pi 3.1415

const lli MOD= 1e9+7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    lli t;cin>>t;
    while(t--){
        lli a,b,c;cin>>a>>b>>c;
        vlli v1(a),v2(b),v3(c);
        for(auto &a:v1)
            cin>>a;
        for(auto &a:v2)
            cin>>a;
        for(auto &a:v3)
            cin>>a;

        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        sort(v3.begin(),v3.end());

        lli sol=min({accumulate(v1.begin(),v1.end(),0ll),accumulate(v2.begin(),v2.end(),0ll),accumulate(v3.begin(),v3.end(),0ll)});
        sol=min(sol,v1[0]+v2[0]+v3[0]-max({v1[0],v2[0],v3[0]}));
        lli sum=accumulate(v1.begin(),v1.end(),0ll)+accumulate(v2.begin(),v2.end(),0ll)+accumulate(v3.begin(),v3.end(),0ll);
        cout<<sum-2*sol<<"\n";
    }
}

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
    vi v(t);
    for(auto &a:v)
        cin>>a;
    
    sort(v.begin(),v.end());
    lli x=0,y=0;
    for(int i=0;i<=floor(t/2);++i){
        y+=v[i];
    }
    for(int i=ceil(t/2);i<t;++i){
        x+=v[i];
    }
    cout<<(x*x)+(y*y)<<"\n";
}
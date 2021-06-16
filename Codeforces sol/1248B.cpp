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
    lli n;cin>>n;
    vi v(n);
    for(auto &a:v)
        cin>>a;

    sort(v.begin(),v.end());
    lli mid=ceil(n/2);
    lli x=0,y=0;
    for(int i=0;i<mid;++i){
        y+=v[i];
    }
    for(int i=mid;i<n;++i){
        x+=v[i];
    }

    lli sum=(x*x)+(y*y);
    cout<<sum<<'\n';
}

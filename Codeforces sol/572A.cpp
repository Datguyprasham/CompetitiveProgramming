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
    int n1,n2;cin>>n1>>n2;
    int k,t;cin>>k>>t;
    vi v(n1);
    for(auto &a:v)
        cin>>a;
    vi v2(n2);
    for(auto &a:v2)
        cin>>a;
    cout<<((v[k-1]<v2[n2-t])?"YES":"NO")<<'\n';
}

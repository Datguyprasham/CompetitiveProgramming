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
    int n;cin>>n;
    vi v(n);
    for(auto &a:v)
        cin>>a;
    
    vi ans(n);
    for(int i=0;i<n;i++){
        ans[v[i]-1]=i+1;
    }
    for(auto x:ans)
        cout<<x<<" ";
    return 0;
}
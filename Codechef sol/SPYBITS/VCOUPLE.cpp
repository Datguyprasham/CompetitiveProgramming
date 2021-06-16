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
        lli n;cin>>n;
        lli b[n],g[n];
        for(int i=0;i<n;i++){cin>>b[i];}
        for(int i=0;i<n;i++){cin>>g[i];}

        sort(b,b+n);
        sort(g,g+n,greater<int>());
        lli ans[n],j=0,k=n-1;
        for(int i=0;i<n;i++){
            ans[i]=b[i]+g[i];
        }
        cout<<*max_element(ans,ans+n)<<'\n';
    }
    return 0;
}
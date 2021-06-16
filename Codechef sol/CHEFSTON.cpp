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
        lli n,k;cin>>n>>k;
        vi a(n),b(n);
        for(auto &v:a)
            cin>>v;
        
        for(auto &v:b)
            cin>>v;

        vlli ans(n);
        for(int i=0;i<n;i++){
            ans[i]=(k/a[i])*b[i];
        }
        cout<<*max_element(ans.begin(),ans.end())<<"\n";
    }
    return 0;
}
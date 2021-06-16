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
        int n;cin>>n;
        vi v(n);
        for(auto &a:v)
            cin>>a;
        sort(v.begin(),v.end());
        bool check=false;
        for(int i=0;i<n-1;i++){
            if(v[i+1]-v[i]==1){
                check=true;
                break;
            }

        }
        if(check)cout<<2<<'\n';
        else cout<<1<<'\n';
    }
    return 0;
}

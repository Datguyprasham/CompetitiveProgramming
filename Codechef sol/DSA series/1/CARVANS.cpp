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
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vi v(n);
        for(auto &a:v)
            cin>>a;
        if(n==1) cout<<1<<'\n';
        else{
            int cnt=n;
            for(int i=1;i<n;i++){
                if(v[i-1]<v[i]){
                    cnt--;
                    v[i]=v[i-1];
                }
            }
            cout<<cnt<<'\n';
        }
    }
    return 0;
}
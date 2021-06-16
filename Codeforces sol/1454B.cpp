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
        map<int,int>mp;
        for(auto &a:v){
            cin>>a;
            mp[a]++;
        }
        int win=-1;
        for(int i=0;i<n;i++){
            if(mp[v[i]]==1 && (win<0 || v[i]<v[win]))
                win=i;
        }
        cout<< (win<0?win:win+1)<<"\n";

    }
}

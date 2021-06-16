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
        lli n,ans=0;cin>>n;
        vi v(n);
        unordered_map<lli,lli> mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        priority_queue<lli> p;
        for(auto x:mp){
            p.push(x.second);
        }
        set<lli> s;
        while(p.size()){
            lli i=p.top();
            while(i>0&&s.count(i)>0){
                i--;
            }
            p.pop();
            ans+=i;
            s.insert(i);
        }
        cout<<ans<<endl;
    }
}

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
        lli n,m,x=0;cin>>n>>m;
        string s;cin>>s;
        while(m--){
        lli l,r;cin>>l>>r;
        unordered_set<lli>us;
        us.emplace(x);
        for(int i=0;i<n;i++){
            if(i>=(l-1)&&i<=(r-1))
                continue;
            else{
                if(s[i]=='+'){
                    x++;
                    us.emplace(x);
                }
                else{
                    x--;
                    us.emplace(x);
                }
            }
        }
        cout<<us.size()<<"\n";
        us.clear();
        }
    }
}

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
        int n,a,b;cin>>n>>a>>b;
        string s="abcdefghijklmnopqrstuvwxyz";
        int subsize;
        if(a==b){
            if(n<=26)
                subsize=n;
            
            else
                subsize=26;
        }
        else{
            subsize=b;
        }
        string str=s.substr(0,subsize);
        string ans="";
        for(int i=0;i<n/subsize;i++){
            ans+=str;
        }
        if(ans.length()!=n){
            ans+=str.substr(0,n-ans.length());
        }
        cout<<ans<<"\n";

    }
    return 0;
}
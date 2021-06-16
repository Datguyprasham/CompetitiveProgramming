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
        int n,k;cin>>n>>k;
        string s;cin>>s;
        string str=s;
        while(k--){
            for(int i=0;i<n;i++){
                if(str[i]=='0'){
                    if(s[i-1]=='1' and s[i+1]!='1')
                        str[i]='1';
                    if(s[i-1]!='1' and s[i+1]=='1')
                        str[i]='1';
                }
            }
            if(str==s)
                break;
            s=str;
        }
        cout<<s<<'\n';

    }
    return 0;
}
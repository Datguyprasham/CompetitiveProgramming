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
        string s;cin>>s;
        reverse(begin(s),end(s));
        int i=0;
        while(s[i]=='0') i++;
        for(int j=i;j<s.size();j++){
            cout<<s[j];
        }
        cout<<'\n';
    }
    return 0;
}
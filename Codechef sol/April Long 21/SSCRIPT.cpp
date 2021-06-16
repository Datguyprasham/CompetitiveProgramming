#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;
typedef vector<int> vi;
typedef vector<long long int> vlli;

#define pb push_back
#define pi 3.1415

const lli MOD= 1e9+7;

bool check(string s,lli k){
    lli cntr=0;
    for(int i=0;i<s.size();){
        if(s[i]=='*'){
            cntr++;i++;
            if(cntr>=k)
                return true;
        }
        else{
            cntr=0;i++;
        }
    }
        return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    lli t;cin>>t;
    while(t--){
        lli n,k;cin>>n>>k;
        string s;cin>>s;
        bool ans= check(s,k);
        if(ans){cout<<"YES \n";}
        else{cout<<"NO \n";}
    }
    return 0;
}
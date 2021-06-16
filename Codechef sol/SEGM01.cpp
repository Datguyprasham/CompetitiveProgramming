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
        string s;cin>>s;
        int t=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'&& s[i+1]!='1')
                t++;
        }
        if(t==1)
            cout<<"YES \n";
        else
            cout<<"NO \n";
    }
    return 0;
}

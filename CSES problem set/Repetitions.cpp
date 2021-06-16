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
    string s;cin>>s;
    int ans=1,c=0;
    char t='A';
    for(char d:s){
        if(d==t){
            ++c;
            ans=max(c,ans);
        }
        else{
            t=d;
            c=1;
        }
    }
    cout<<ans;
    return 0;
}

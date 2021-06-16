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
    int n;cin>>n;
    string s;cin>>s;
    int ans=0;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1])
            ans++;
    }

    cout<<ans<<"\n";
    return 0;
}
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
        lli n,k;cin>>n>>k;
        string s;cin>>s;
        bool flag=1;
        if(k==0){
            cout<<"YES\n";  
            continue;
        }
        lli cnt=0;
        for(lli i=0;i<n/2;i++)
        {
            if(s[i]!=s[n-1-i])
                break;
            else
                cnt++;
        }
        if((n%2==1 && k<=cnt)||(n%2==0 && k<=cnt-1))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
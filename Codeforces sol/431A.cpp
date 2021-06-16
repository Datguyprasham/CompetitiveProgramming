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

    int arr[4];
    for(int i=0;i<4;i++){cin>>arr[i];}
    string s;cin>>s;

    int ans=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1')
            ans+=arr[0];

        else if(s[i]=='2')
            ans+=arr[1];
        
        else if(s[i]=='3')
            ans+=arr[2];

        else
            ans+=arr[3];
    }
    cout<<ans<<"\n";
    return 0;
}
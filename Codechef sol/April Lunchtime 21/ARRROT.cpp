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
    lli n,q,sum=0;cin>>n;
    lli a[n];
        
    
    for(lli i=0;i<n;i++)
    {
        cin>>a[i];
        sum=(sum+a[i]+MOD)%MOD;
    }
    
    cin>>q;
    lli queries[q];
    for(lli i=0;i<q;i++){
        cin>>queries[i];
    }

    while(q--){
        sum=(sum*2)%MOD;
        cout<<sum<<"\n";
    }

    return 0;
}
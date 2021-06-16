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
        lli n,sum1=0,sum2=0;cin>>n;
        if(n==2){cout<<2<<"\n";}
        else if(n==4){cout<<6<<"\n";}
        else{
        for(lli i=n/2;i<n;i++){
            sum1+=(1<<i);
        }
        for(lli i=1;i<n/2;i++){
            sum2+=(1<<i);
        }
        sum2+=(1<<n);
        cout<<abs(sum2-sum1)<<"\n";
        }
    }
}

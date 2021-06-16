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
        lli n,sum=0;cin>>n;
        
        if(n%2050!=0 )
            cout<<-1<<"\n";
        else{
            n/=2050;
            lli cnt=0;
            while(n){
                cnt+=n%10;
                n/=10;
            }
            

            cout<<cnt<<"\n";
        }
    }
    return 0;
}
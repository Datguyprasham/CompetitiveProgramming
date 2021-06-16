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
        int n,k,x,y;cin>>n>>k>>x>>y;
        if(x==y){cout<<n<<" "<<n<<"\n";}
        else{
            if(x>y){
                if((k-1)%4==0){cout<<n<<" "<<(n-x+y)<<"\n";}
                else if((k-2)%4==0){cout<<(n-x+y)<<" "<<n<<"\n";}
                else if((k-3)%4==0){cout<<0<<" "<<x-y<<"\n";}
                else if(k%4==0){cout<<x-y<<" "<<0<<"\n";}
            }
            else{
                if((k-1)%4==0){cout<<(n-y+x)<<" "<<n<<"\n";}
                else if((k-2)%4==0){cout<<n<<" "<<(n-y+x)<<"\n";}
                else if((k-3)%4==0){cout<<y-x<<" "<<0<<"\n";}
                else if(k%4==0){cout<<0<<" "<<y-x<<"\n";}
            }
        }
    }
}

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
        int x,n,m;cin>>x>>n>>m;
        m*=10;
        if(x<=m){cout<<"YES \n";}
        else{
            while(n--){
                x= (x/2)+10;
            }
            x=x-m;
            if(x<=0){cout<<"YES \n";}
            else{cout<<"NO \n";}
        }
    }
    return 0;
}
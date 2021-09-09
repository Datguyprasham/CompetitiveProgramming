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
    lli n,k;cin>>n>>k;
    while(k--){
        if(n%200==0)
            n/=200;
        else
            n=n*1000 + 200;
    }
    cout<<n<<'\n';
    return 0;
}
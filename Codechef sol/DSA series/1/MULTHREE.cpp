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
        lli k,d1,d2,d;cin>>k>>d1>>d2;
        --k;--k;
        lli sum=d1+d2;
        if(sum==10 || sum==5) cout<<"NO \n";

        if(sum%3==0) cout<<"YES \n";
        else cout<<"NO \n";
    }
    return 0;
}
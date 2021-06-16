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
        int n,a,b,c,d;cin>>n>>a>>b>>c>>d;
        int max1=n*(a+b),min1=n*(a-b);

        if(max1<c-d || min1>c+d){cout<<"NO\n";}
        else{cout<<"YES \n";}
    }
    return 0;
}
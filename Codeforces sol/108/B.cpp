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
        int x2,y2,k,cost=0;cin>>x2>>y2>>k;

        cost=x2*y2 -1;
        
        if(cost==k){cout<<"YES \n";}
        else {cout<<"NO \n";}
    }
    return 0;
}


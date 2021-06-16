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
        int h,x,y,c;
        cin>>h>>x>>y>>c;
        int sum= x+floor(y/2);
        if(h*sum<=c){cout<<"YES \n";}
        else{cout<<"NO \n";}
    }
    return 0;
}
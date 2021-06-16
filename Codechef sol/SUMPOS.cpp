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
        int x,y,z;cin>>x>>y>>z;
        int temp=max({x,y,z});
        int sum=x+y+z;
        if(sum-temp==temp)
            cout<<"YES \n";
        else
            cout<<"NO \n";
    }
    return 0;
}
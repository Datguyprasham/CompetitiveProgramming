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
        int n,m;cin>>n>>m;
        int x,y;cin>>x>>y;
        int a,b;cin>>a>>b;

        int thief= n-x + m-y;
        int police= max(n-a,m-b);
        police>=thief? cout<<"YES \n": cout<<"NO \n";
    }
    return 0;
}
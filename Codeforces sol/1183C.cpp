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
        lli k,n,a,b;cin>>k>>n>>a>>b;
        if((k-1)/b<n)
            cout<<-1<<'\n';//cant be equal
        else
            cout<<min(n,(k-1-b*n)/(a-b))<<'\n';  //number of a type
    }
}

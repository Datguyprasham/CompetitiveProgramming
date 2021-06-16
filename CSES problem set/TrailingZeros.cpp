#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    lli n;cin>>n;
    lli zeros= 0;
    while(n){
        zeros+=n/5;
        n=n/5;
    }
    cout<<zeros<<"\n";
}

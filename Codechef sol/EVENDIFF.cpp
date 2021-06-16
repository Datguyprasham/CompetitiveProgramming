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
        int n,cnto=0,cnte=0;cin>>n;
        vi v(n);
        for(auto &a:v){
            cin>>a;
            if(a%2==0){cnte++;}
            else{cnto++;}
        }
        if(cnte==n || cnto==n){cout<<"0 \n";}
        else{ cout<<min(cnte,cnto)<<'\n';}
    }
    return 0;
}
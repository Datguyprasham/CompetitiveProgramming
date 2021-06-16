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
        lli n;cin>>n;
        if(n==1){cout<<20<<'\n';} 
        else if(n==2){cout<<36<<'\n';}
        else if(n==3){cout<<51<<'\n';}
        else if(n%4==0){cout<<(44*(n/4)+16)<<'\n';}
        else if(n>4 && n%4==1){cout<<(44*(n/4)+32)<<'\n';}
        else if(n>4 && n%4==2){cout<<(44*(n/4)+44)<<'\n';}
        else if(n>4 && n%4==3){cout<<(44*(n/4)+55)<<'\n';}
    }
    return 0;
}
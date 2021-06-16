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
        int r,b,d;cin>>r>>b>>d;
        if(d==0 && r!=b){cout<<"NO \n";}
        else if(d>=max(r,b) || d<min(r,b)){cout<<"NO \n";}
        else if((r==1 || b==1) && abs(r-b)>d){cout<<"NO \n";}
        else{cout<<"YES \n";}
    }
    return 0;
}
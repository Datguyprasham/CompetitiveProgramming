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
        int w,h,n;cin>>w>>h>>n;
        int z=1;
        while(w%2==0){
            w=w/2;
            z+=z;
        }
        while(h%2==0){
            h=h/2;
            z+=z;
        }
        if(z>=n){cout<<"YES \n";}
        else{cout<<"NO \n";}
    }
}

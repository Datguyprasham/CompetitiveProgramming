#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;

int64_t division(int64_t a,int64_t b){
    return ((a+b-1)/b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int64_t t;cin>>t;
    while(t--){
        int64_t x,y,k;cin>>x>>y>>k;
        int64_t times=0,sticks=0;
        sticks=division((k*y+k-1),(x-1));
        times=k+sticks;
        cout<<times<<"\n";
    }
}

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    lli t;cin>>t;
    while(t--){
        lli a,b,x,y;cin>>a>>b;
        x=2*a -b;
        y=2*b - a;
        if(x>=0 && y>=0){
            if(x%3==0 && y%3==0){cout<<"YES \n";}
            else{cout<<"NO \n";}
        }
        else{cout<<"NO \n";}

}
}

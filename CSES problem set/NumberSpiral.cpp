#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ull t;cin>>t;
    while(t--){
        lli y,x;cin>>y>>x;
        if(y>x){
            if(y&1){
                y--;
                cout<<y*y-x<<"\n";
            }
            else{
                cout<<y*y-x+1<<"\n";
            }
        }
        else{
            if(x&1){
                cout<<x*x-y+1<<"\n";
            }
            else{
                --x;
                cout<<x*x-y<<"\n";
            }
        }
    }
}

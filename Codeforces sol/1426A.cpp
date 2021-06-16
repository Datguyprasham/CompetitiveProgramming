#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n,x,i=0;cin>>n>>x;
        if(n==1||n==2){
            cout<<1<<"\n";
        }
        else{
            bool value=true;
           while(value!=false){
            if((n>=(i*x +3))&&(n<=(i*x+x+2))){
                value=false;
           }
           else{
            i++;
           }
        }
        cout<<i+2<<"\n";
    }
}
}

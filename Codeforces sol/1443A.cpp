#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        if(n==1){
            cout<<4<<"\n";
        }
        else{
            for(int i=0;i<2*n;i+=2){
                cout<<4*n-i<<" ";
            }
            cout<<"\n";
        }

    }
}

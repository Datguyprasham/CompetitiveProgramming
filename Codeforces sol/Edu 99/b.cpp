#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        if(n==1)
            cout<<1<<"\n";
        else if(n==2)
            cout<<3<<"\n";
        else if(n>2)
            cout<<n-1<<"\n";
    }
}

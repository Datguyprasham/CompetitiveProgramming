#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n,c0,c1,h,sum=0;cin>>n>>c0>>c1>>h;
        string s;cin>>s;
        for(int a:s){
            if(a=='1')
                sum+=min(c1,c0+h);
            else
                sum+=min(c0,c1+h);
        }
        cout<<sum<<"\n";
    }
}

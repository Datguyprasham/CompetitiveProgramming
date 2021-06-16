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
        if(n==1){cout<<9<<'\n';}
        else if(n==2){cout<<98<<"\n";}
        else{
        int k=9;cout<<98;
        for(int i=3;i<=n;i++){
            cout<<k;k++;
            k=k%10;
        }
        cout<<"\n";
        }
    }
}

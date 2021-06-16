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
        lli n,a,b;cin>>n>>a>>b;
        lli p1=0,p2=0; 
        while(n--){
            string s;cin>>s;
            if(s[0]=='E' || s[0]=='Q' || s[0]=='U' || s[0]=='I' ||  s[0]=='N' || s[0]=='O' || s[0]=='X')
                p1+=a;
            else
                p2+=b;
        }
        if(p1==p2){cout<<"DRAW \n";}
        else if(p1>p2){cout<<"SARTHAK \n";}
        else{cout<<"ANURADHA \n";}
    }
    return 0;
}



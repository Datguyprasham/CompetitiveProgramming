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
    int a,b,c,d;cin>>a>>b>>c>>d;
    int m= max((3*a)/10,(a-(a*c/250)));
    int v=max((3*b)/10,(b-(b*d/250)));
    if(m>v){cout<<"Misha";}
    else if(v>m){cout<<"Vasya";}
    else{cout<<"Tie";}
}

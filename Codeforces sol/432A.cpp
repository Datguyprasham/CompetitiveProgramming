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
    int n,k;cin>>n>>k;
    vi v(n);
    for(auto &a:v)
        cin>>a;
    if(v.size()<3){cout<<0<<"\n";}
    else{
    sort(v.begin(),v.end());
    int cnt=0;
    for(int i=0;i<=v.size()-3;i+=3){
        if(v[i]+k<=5 && v[i+1]+k<=5 && v[i+2]+k<=5){cnt++;}
    }
    cout<<cnt<<"\n";
    }
}

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
        int n;cin>>n;
        vi v(n);
        for(auto &a:v)
            cin>>a;
        while(v.back()==0)v.pop_back();//removes from back 1 found
        reverse(v.begin(),v.end());
        while(v.back()==0)v.pop_back(); //removes from prev front side
        int ans=count(v.begin(),v.end(),0);
        cout<<ans<<'\n';
    }
}

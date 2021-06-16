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
    lli n;cin>>n;
    lli len=2*n;
    vlli v(len);
    for(auto &a:v)
        cin>>a;
    if(count(v.begin(),v.end(),v[0])==len)
        cout<<-1<<'\n';
    else{
        sort(v.begin(),v.end());
        for(auto &x:v)
            cout<<x<<" ";
    }
}

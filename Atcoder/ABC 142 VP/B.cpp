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

    int cnt=0;
    for(auto i:v){
        if(i<k)
            cnt++;
    }

    cout<<n-cnt<<'\n';
    return 0;
}
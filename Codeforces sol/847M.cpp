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
    int n;cin>>n;
    vi v(n);
    for(auto &a:v)
        cin>>a;
    int d=v[1]-v[0],ptr=0;
    for(int i=0;i<n-1;i++){
        if(v[i+1]-v[i]==d)
            ptr++;
    }
    if(ptr>=n-1)
        cout<<(v[n-1]+d);
    else
        cout<<v[n-1];
    return 0;
}

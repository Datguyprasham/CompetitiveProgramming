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
    vi A(n),B(n);
    for(auto &a:A)
        cin>>a;
    
    for(auto &b:B)
        cin>>b;

    cout<<max(0,*min_element(B.begin(),B.end())-*max_element(A.begin(),A.end())+1)<<"\n";
    return 0;
}
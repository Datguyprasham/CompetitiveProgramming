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
    int k,r;cin>>k>>r;
    int i;
    for(i=1;i<10;i++){
        if((k*i) % 10 ==0 || (k*i)%10==r)
            break;
    }
    cout<<i<<"\n";
    return 0;
}
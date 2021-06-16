// 1 10 20 100 200 400 1000 2000 4000 8000 10000 20000 40000 80000 160000


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
        lli n,pwr10;cin>>n;
        while (n%10==0){
           n/=10;
            pwr10++;
        }
        if(n%2==0)
    }
    return 0;
}
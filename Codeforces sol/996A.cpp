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
    int v[n]={100,20,10,5,1};
    lli cnt=0;
    lli i=0;
    while(n!=0){
        cnt+=n/v[i];
        n%=v[i];
        i++;
    }
    cout<<cnt<<'\n';  
    return 0;
}
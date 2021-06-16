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
    int i=1,j,dif=INT_MAX,a,b;
    while(i*i<=n){
        if(n%i==0){j=n/i;a=i;b=j;}
        dif=min(dif,abs(j-i));
        i++;
    }
    cout<<a<<" "<<b;
}

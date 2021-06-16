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
        lli n,k,a1,a2,a3;cin>>n>>k;
        if(n%2==0 && n%4==0){
            a1=n/2;
            n/=2;
            a2=a3=(n/2);
        }
        else if(n%2==0 && n%4!=0){
            a1=2;
            n-=2;
            a2=a3=(n/2);
        }
        else{
            a1=1;
            n--;
            a2=a3=(n/2);
        }
        cout<<a1<<" "<<a2<<" "<<a3<<"\n";
    }
    return 0;
}
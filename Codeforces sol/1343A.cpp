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
        lli n;cin>>n;
        for(int i=2;i<30;i++){
            lli val=(1<<i)-1;
            if(n%val==0){
                cout<<n/val<<"\n";
                break;
            }
        }
    }
    return 0;
}
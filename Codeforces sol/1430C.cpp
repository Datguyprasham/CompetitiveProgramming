#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        lli n;cin>>n;
        cout<<2<<"\n";
        cout<<n<<" "<<n-1<<"\n";
        lli i=n-2;
        lli ptr=n;
        while(ptr>=3){
            cout<<ptr<<" "<<i<<"\n";
            ptr--;
            i--;
        }
    }
}

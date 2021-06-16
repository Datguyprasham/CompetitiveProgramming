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
        bool flag=0;
        for(lli i=0;i*111<=n;i++){
            if((n-(i*111))%11==0){
                flag=1;break;
            }
        }
        if(flag==1)
            cout<<"YES \n";
        else
            cout<<"NO \n";
    }
    return 0;
}
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
        int a1,b1,a2,b2;cin>>a1>>b1;
        cin>>a2>>b2;
        if(max(a1,b1)==max(a2,b2) && (min(a1,b1)+min(a2,b2)==max(a1,b1)))
            cout<<"YES \n";
        
        else
            cout<<"NO \n";
    }
    return 0;
}
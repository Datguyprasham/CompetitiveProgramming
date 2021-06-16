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
        int n;cin>>n;
        vi v(n);
        for(auto &a:v)
            cin>>a;
        sort(begin(v),end(v));
        //check if max granny can come find max
        int i;
        for(i=n-1;i>=0;--i){
            if(v[i]<=i+1){
                cout<<i+2<<"\n"; //i+1 needed and herself
                break;
            }
        }
        if(i<0){
            cout<<1<<"\n";
        }
    }
    return 0;
}
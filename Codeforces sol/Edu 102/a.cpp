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
        int n,d;cin>>n>>d;
        vi v(n);
        for(auto &a:v)
            cin>>a;
        sort(v.begin(),v.end());
        auto it=upper_bound(v.begin(),v.end(),d);
        if(it==v.end())
            cout<<"YES \n";
        else if(it==v.begin())
            cout<<"NO \n";
        else{
            if(v[0]+v[1]>d)
                cout<<"NO \n";
            else
                cout<<"YES \n";
        }
    }
}

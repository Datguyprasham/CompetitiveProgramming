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
        vlli v(n);
        for(auto &a:v)
            cin>>a;
        vlli prefsum(n);
        prefsum[0]=v[0];
        for(int i=1;i<n;i++){
            if(v[i]!=-1)
                prefsum[i]=prefsum[i-1]+v[i];
            else{
                int t=floor(prefsum[i-1]/(i));
                v[i]=t;
                prefsum[i]=prefsum[i-1]+t;
            }
        }
        for(auto &a:v)
            cout<<a<<" ";
        cout<<"\n";
    }
    return 0;
}

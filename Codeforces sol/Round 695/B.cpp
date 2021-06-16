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
        vi v(n);
        for(auto &a:v)
            cin>>a;

        //count no.of hills and valleys
        int total=0;
        for(int i=1;i<v.size()-1;i++){
            if((v[i]>v[i+1] && v[i]>v[i-1]) || (v[i]<v[i-1] && v[i]<v[i+1]) )
                total++;
        }
    }
}

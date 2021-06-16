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
        int n,x;cin>>n;
        vi v(101);
        for(int i=0;i<n;i++){
            cin>>x;
            v[x]++;
        }
        int cnt=*max_element(v.begin(),v.end());
        while(cnt--){
            for(int i=0;i<101;i++){
                if(v[i]>0){
                    cout<<i<<" ";
                    v[i]--;
                }
            }
        }
        cout<<"\n";

    }
    return 0;
}
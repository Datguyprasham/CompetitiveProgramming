#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;
typedef vector<int> vi;
typedef vector<long long int> vlli;

#define pb push_back
#define pi 3.1415

const lli MOD= 1e9+7;

// //find last place where cnt=1 and last place where cnt=0
int cnt[102];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    lli t;cin>>t;
    while(t--){
        int n;cin>>n;
        vi v(101);
        int ans=0,x;
        for(int i=0;i<n;i++){
            cin>>x;
            v[x]++;
        }
        //find cnt=0
        for(int i=0;i<=101;i++){
            if(v[i]>=1)
                v[i]--;
            else{
                ans+=i;
                break;
            }
        }
        //find cnt=1
        for(int i=0;i<=101;i++){
            if(v[i]>=1)
                v[i]--;
            else{
                ans+=i;
                break;
            }
        }

        cout<<ans<<"\n";
    }
    return 0;
}

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
    lli t=1;cin>>t;
    while(t--){
        int n,arr[200005];cin>>n;
        lli b[200]={0};
        for(int i=0;i<n;i++){
            cin>>arr[i];
            b[arr[i]%200]++;
        }
        lli ans=0;
        for(lli i=0;i<200;i++){
            ans+=(b[i]*(b[i]-1))/2;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
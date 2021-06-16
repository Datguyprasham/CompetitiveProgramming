#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;
typedef vector<int> vi;
typedef vector<long long int> vlli;

#define pb push_back
#define pi 3.1415

const lli MOD= 1e9+7;

// 1 2 3 4 5 6 7  1 7 2 6 3 5 4 
// n/2 <k  1 6 2 3 4 5

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    lli t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;

        vector<int> ans(n+1);
        int num=n;
        for(int i=2;i<n;i+=2)
        {
            if(k==0)break;
            ans[i]=num--;
            k--;
        }
        if(k)
        {
            cout<<-1<<'\n';
            continue;
        }
        int cur=1;
        for(int i=1;i<=n;i++)
        {
            if(!ans[i])
            ans[i]=cur++;
        }

        for(int i=1;i<=n;i++)
        cout<<ans[i]<<" ";
        cout<<"\n";

    }
    return 0;
}
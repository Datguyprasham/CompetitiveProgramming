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
    int n;cin>>n;
    vi pos1,pos2,pos3;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x==1)
            pos1.pb(i+1);
        
        else if(x==2)
            pos2.pb(i+1);
        
        else
            pos3.pb(i+1);
    }

    int ans=min(pos1.size(),min(pos2.size(),pos3.size()));
    cout<<ans<<"\n";
    for(int i=0;i<ans;i++){
        cout<<pos1[i]<<" "<<pos2[i]<<" "<<pos3[i]<<"\n";
    }
    return 0;
}
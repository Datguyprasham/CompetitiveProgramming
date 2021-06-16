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
    
    
    lli n,q,x,k;cin>>n;
    lli p[n+1];
    for(int i=1;i<=n;i++){cin>>p[i];}
    cin>>q;
    while(q--){
        lli s=0;
        cin>>x>>k;
        for(int j=x;j<=n;j++){
            if(k>0 && k>=p[j] && p[j]!=0){
                k-=p[j];
                s+=(p[j]*(j-x));
                p[j]=0;
            }
            else if(k>0 && k<p[j]){
                p[j]-=k;
                s+=(k*(j-x));
                k=0;
            }
            else if(k==0){break;}
        }
        cout<<s<<'\n';
    }
    return 0;
}



         
         
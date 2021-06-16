#include "bits/stdc++.h"
using namespace std;

typedef unsigned long long ull;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll,ll> pll;
typedef map<int,int> mii;

#define  ff          first
#define  ss          second
#define  pb          push_back
#define  IOS         ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/* CONSTRAINTS */
#define pi 3.1415
const ll MOD= 1e9+7;
const ll INF = 1e9;
const int MAX_N=1e5+1;

/* CEIL() for int and ll
  q = (x % y) ? x / y + 1 : x / y;
*/

void solve(){
    int n,x,y;cin>>n>>x>>y;
    if(n>=y){
        for(int i=1;i<=n;i++)
            cout<<i<<" ";
    }
    else{
        int temp=y-x;
        int minn=INT_MAX,d,result,start; 
        
        for(int i=temp;i>=1;i--){ 
            if((y-x)%i!=0)continue;
            if(((y-x)/i+1)>n)continue;
            int temp1=min((x-1)/i,n-((y-x)/i+1));
            result=x+(n-temp1)*i;
            if(minn>result){
                d=i; 
                minn=result;
                start=x-(temp1)*i;
            }
        }
        for(int i=1;i<=n;i++){
            cout<<start<<" ";
            start+=d;
        }
    }
    cout<<'\n';
}

int main(){
    IOS;
    int tc;cin>>tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
    return 0;
}
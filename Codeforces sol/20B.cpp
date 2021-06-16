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
	ll a,b,c;cin>>a>>b>>c;
    if (a==0 && b==0 && c==0){
    	cout <<-1<<'\n';
    	return;
    }
    if (a==0 && b==0 && c!=0){
        cout <<0<<'\n';
        return;
    }
    if (a==0 && b!=0){
        cout <<1<<endl;
        double ans = (-1.0)*c/b;
        cout << fixed << setprecision(10) << ans <<'\n';
        return;
    }
    double temp = b*b-4*a*c;
    if (temp<0){
        cout <<0<<'\n';
    }else if (temp==0){
        cout <<1<<endl;
        double ans = -1.0*b/(2*a);
        cout << fixed << setprecision(10) << ans << '\n';
    }else if (temp>0){
        cout <<2<<endl;
        temp = sqrt(temp);
        double ans1 = (-1.0*b-temp)/(1.0*2*a),ans2 = (-1.0*b+temp)/(1.0*2*a);
        if (ans1>ans2) 
        	swap(ans1,ans2);
        cout << fixed << setprecision(10) << ans1 <<'\n'<<ans2<<'\n';
    }
}

int main(){
    IOS;
    int tc=1;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
    return 0;
}
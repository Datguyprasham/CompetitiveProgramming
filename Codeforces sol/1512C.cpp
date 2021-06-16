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
	int a,b;cin>>a>>b;
	string s;cin>>s;
	int n=s.length();
	bool flag=0;
	int cnt=0;

	for(int i=0;i<=(n-1)/2;i++){
		if(i!=n-i-1){
			if(s[i]=='?'){
				if(s[n-i-1]=='?'){
					s[i]=s[n-i-1];
					cnt+=2;
				}
				else if(s[n-i-1]=='0'){
					s[i]='0';
					a-=2;
				}
				else{
					s[i]='1';
					b-=2;
				}
			}
			else{
				if(s[n-i-1]=='?'){
					s[n-i-1]=s[i];
					if(s[i]=='0')
						a-=2;
					else
						b-=2;
				}
				else{
					if(s[i]!=s[n-i-1])
						flag=1;
					else if(s[i]=='0')
						a-=2;
					else
						b-=2;
				}
			}
		}
		else{
			if(s[i]=='?')
				cnt++;
			else{
				if(s[i]=='0')
					a-=2;
				else
					b-=2;
			}
		}
	}

	if(flag=1 || cnt!=a+b)
		cout<<-1<<'\n';
	else{
		for(int i=0;i<=(n-1)/2;i++){
			if(s[i]=='?'){
				if(i!=n-i-1){
					if(a>=2){
						s[i]=s[n-i-1]='0';
						a-=2;
					}
					else if(b>=2){
						s[i]=s[n-i-1]='1';
						b-=2;
					}
				}
				else{
					if(a>=1){
						s[i]='0';
						a--;
					}
					else if(b>=1){
						s[i]='1';
						b--;
					}
				}
			}
		}

		if(a==0 && b==0)
			cout<<s<<'\n';
		else
			cout<<-1<<'\n';
	}

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
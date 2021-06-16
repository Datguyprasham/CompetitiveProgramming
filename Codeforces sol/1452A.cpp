#include<bits/stdc++.h> 
using namespace std; 


typedef unsigned long long ull;
typedef long long int lli;

void solve(){
	ull x,y,ans=0;cin>>x>>y;
	if(x==y){
		cout<<x+y<<"\n";
	}
	else{
		ans=2*max(x,y) - 1;
		cout<<ans<<"\n";
	}
} 
int main() 
{ 
   ios_base::sync_with_stdio(false);cin.tie(NULL); 
   
   #ifndef ONLINE_JUDGE 
   freopen("input.txt", "r", stdin);  
   freopen("output.txt", "w", stdout); 
   #endif

   int t;cin>>t;
   while(t--){
	solve();
   }
   return 0;
}
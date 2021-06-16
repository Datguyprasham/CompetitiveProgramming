#include<bits/stdc++.h> 
using namespace std; 


typedef unsigned long long ull;
typedef long long int lli;

void solve(){
	lli n,sum=0,k,maximum;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	lli a=ceil(sum/(n-1));
	maximum=*max_element(arr,arr+n);
	k=max(a,maximum);
	lli ans=abs((n-1)*k-sum);
	cout<<ans<<"\n";
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
#include<bits/stdc++.h> 
using namespace std; 
void solve(); 
int main() 
{ 
   ios_base::sync_with_stdio(false);cin.tie(NULL); 
   
   #ifndef ONLINE_JUDGE 
   freopen("input.txt", "r", stdin);  
   freopen("output.txt", "w", stdout); 
   #endif

   int t;cin>>t;
   while(t--){
   	int n;cin>>n;
   	int arr[n];
   	for(int i=0;i<n;i++){
   		cin>>arr[i];
   	}
   	int brr[n];
   	int left=0,right=n-1;
   	for(int i=0;i<n;i++){
   		if(i%2==0){
   			brr[i]=arr[left++];
   		}
   		else{
   			brr[i]=arr[right--];
   		}
   	}
   	for(int x:brr){
   		cout<<x<<" ";
   	}
   	cout<<"\n";
   }
   return 0;
}
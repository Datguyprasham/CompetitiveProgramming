#include<bits/stdc++.h> 
using namespace std; 
void solve(); 

void next(char &x) {
    if (x <= 'b') 
    	x++;
    else 
    	x = 'a';
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
   	int n,k;cin>>n>>k;
   	char answer='a';
   	for(int i=0;i<n;i++){
   		cout<<answer;
   		next(answer);
   	}
   	cout<<"\n";

   }
   return 0;
}
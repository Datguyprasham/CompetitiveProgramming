#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;
	cin>>n;
	if(n==1 || n==2 || n==4)
	{
		cout<<-1<<endl;
	}
	else if(n%3==0){
		cout<<n/3<<" 0 0"<<endl;

	}
	else if(n%3==2)
	{
		int x=n/3;
		x--;
		cout<<x<<" 1 0"<<endl;

	}
	else if(n%3==1)
	{
		int x=n/3;
		--x;
		--x;
		cout<<x<<" 0 1"<<endl;

	}
    }
}

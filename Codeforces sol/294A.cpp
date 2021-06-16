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
    int n,m,a[101]={0};
	int x,y,i;
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	cin>>m;
	for(i=1;i<=m;i++){
		cin>>x>>y;
		a[x-1]+=y-1;
		a[x+1]+=a[x]-y;
		a[x]=0;
	}
	for(i=1;i<=n;i++)
		cout<<a[i]<<endl;

    return 0;
}
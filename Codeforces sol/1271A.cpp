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
   	lli a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;

	lli t1=a,t2=min(b,c),sum=0;
	if(e>f){
        sum+=e*min(d,a);
        d-=min(d,a);
        sum+=min(d,t2)*f;
	}
	else{
        sum+=f*min(d,t2);
        d-=min(d,t2);
        sum+=min(d,a)*e;
	}
	cout<<sum<<endl;

}

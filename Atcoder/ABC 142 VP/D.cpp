#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;
typedef vector<int> vi;
typedef vector<long long int> vlli;

#define pb push_back
#define pi 3.1415

const lli MOD= 1e9+7;

lli gcd(lli x, lli y) {
	if(y == 0) return x;
	return gcd(y, x % y);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    lli a,b;cin>>a>>b;
    lli cnt=1; //as 1 will alwasys be there
    lli temp=gcd(a,b);

    for(lli i = 2; i * i <= temp; i++) {
		if(temp % i == 0)
            cnt++;
		while(temp % i == 0) 
            temp/= i;
	}
	if(temp > 1) 
        cnt++;
	
    cout<<cnt<<"\n";

    return 0;
}
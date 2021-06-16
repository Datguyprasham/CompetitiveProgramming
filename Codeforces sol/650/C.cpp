//k+1 0's 1 to 1st, 2k+1 cons. 0's 1 to mid,>k+1 0's 1 to end, if len(s)==k ans =1

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

    lli t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        //string s;cin>>s;
        cin>>n>>k;
        int q=0,w=0,c=0;
        char x;
        for(int i=0;i<n;i++){
    	    cin>>x;
    	    if(x=='0') {
                w++,q++;
            }
    	    else if(x=='1') 
                q=0;
		    if(q==k+1&&i==k){
                c++,q=k;
            }
		    //The first case
		    else if(q==2*k+1) {
                c++,q=k;
            }
		    //The second case
	    }
	    if(q>=k+1) 
            c++;
	    //The third case
	    if(w==n&&c==0) 
            c++;
	    //The fourth case
	    cout<<c<<endl;
    }
    return 0;
}
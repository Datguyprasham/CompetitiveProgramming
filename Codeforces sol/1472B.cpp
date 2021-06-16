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
        int n;cin>>n;

        vector<int>c(n);
        for(auto &a:c){
            cin>>a;
        }
        int sum1=count(c.begin(),c.end(),1),sum2=2*count(c.begin(),c.end(),2);
        if((sum1==0 || sum2==0) && n%2!=0){cout<<"NO \n";}
        else if(sum1%2 !=0 || sum2%2!=0){cout<<"NO \n";}
        else{cout<<"YES \n";}
    }
}

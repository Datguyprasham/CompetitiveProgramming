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
        int n,k,cnt=0;cin>>n>>k;
        bool reject=false,bot=false,slow=false,tooslow=false;
        vi v(n);
        for(auto &a:v){
            cin>>a;
            if(a != -1){cnt++;}
            if(a>=k){slow=true;}
        }
        if(cnt<ceil(n/2)){
            cout<<"Rejected \n";
            reject=true;
        }
        if(reject==false && slow ==true){
            cout<<"Too Slow \n";
            tooslow=true;
        }
        if(reject==false && tooslow == false && cnt==n){
            cout<<"Bot \n";
            bot=true;
        }
        else{cout<<"Accepted \n";}
    }
    return 0;
}
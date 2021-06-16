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
        int act,points=0;cin>>act;
        string origin;cin>>origin;
        bool ind=false;
        if(origin=="INDIAN") ind=true;
        while(act--){
            string s;cin>>s;
            if(s=="CONTEST_WON"){
                int rank;cin>>rank;
                int bonus=max(0,20-rank);
                points+=300 +bonus;
            }
            else if(s=="TOP_CONTRIBUTOR"){
                points+=300;
            }
            else if(s=="BUG_FOUND"){
                int sever;cin>>sever;
                points+=sever;
            }
            else if(s=="CONTEST_HOSTED"){
                points+=50;
            }
        }
        if(ind) cout<<points/200<<'\n';
        else cout<<points/400<<'\n';
    }
    return 0;
}
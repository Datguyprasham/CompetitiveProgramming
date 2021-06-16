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
        string s;
        cin>>s;
        if(s.length()%2){
            cout<<"NO \n";
        }
        else if(s[0]==')' || s[s.length()-1]=='('){
            cout<<"NO \n";
        }
        else{cout<<"YES \n";}
    }
}

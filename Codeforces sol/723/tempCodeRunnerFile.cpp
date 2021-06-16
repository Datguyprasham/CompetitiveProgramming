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
        lli n;cin>>n;
        string str=to_string(n);
        string s="";
        for(int i=0;i<str.size();i++){
            s+='1';
        }
        int temp=stoi(s);
        while(n>=11){
            if(n>temp){
                n=n-temp;
            }
            else{
                temp=stoi(s.substr(0,str.size()-1));
                lli val=n/temp;
                n-=val*temp;
            }
        }
            
        if(n==0){cout<<"YES \n";}
        else{cout<<"NO \n";}
    }
    return 0;
}
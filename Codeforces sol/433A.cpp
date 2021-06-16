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
    string s;cin>>s;

    if(s=="{}"){cout<<0<<"\n";}
    else{
        unordered_map<char,int>mp;
        for(int i=1;i<s.size();i+=3){
            mp[s[i]]+=1;
        }
        cout<<mp.size()<<"\n";
    }
}

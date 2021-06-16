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
    int n;cin>>n;
    if(n>0){cout<<n<<"\n";}
    else{
        string str=to_string(n);
        int secl=str.size()-2;int last=str.size()-1;
        string s1=str,s2=str;
        s1.erase(s1.begin()+secl);
        s2.erase(s2.begin()+last);
        int t,p;
        t=stoi(s1);p=stoi(s2);
        cout<<max(t,p)<<"\n";
    }
}

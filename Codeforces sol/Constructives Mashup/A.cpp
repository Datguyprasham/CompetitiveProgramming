#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    lli n;cin>>n;
    string s;
    for(lli i=0;i<200000/4;i++){
        s+="aa";
        s+="bb";
    }
    cout<<s.substr(0,n);
}

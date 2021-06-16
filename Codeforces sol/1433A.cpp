#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int dig = s[0]- '0' -1;
        int len= s.size();
        cout<<dig*10+ len*(len+1)/2<<"\n";
    }

}

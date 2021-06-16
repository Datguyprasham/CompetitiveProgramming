#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    string s,t;
    cin>>n>>s;
    if(n<=2)
      cout<<s;
    else{
        int d=1;
        if(n%2) d=0;
        t=s[0];
        for(int i=1;i<n;i++){
           d?t+=s[i]:t=s[i]+t;
           d=!d;
        }
        cout<<t;
    }

    return 0;
}

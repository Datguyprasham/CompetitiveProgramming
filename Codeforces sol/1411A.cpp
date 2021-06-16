#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int ptr=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]==')')
                ptr++;
            else
                break;
        }
        if(2*ptr>n)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
}

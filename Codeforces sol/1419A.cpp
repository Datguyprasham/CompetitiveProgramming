#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n,ptr=0;cin>>n;
        string s;cin>>s;
        if(n%2==0){
            for(int i=1;i<n;i+=2){
                if(s[i]=='2'||s[i]=='4'||s[i]=='6'||s[i]=='8'||s[i]=='0'){
                    ptr++;
                    break;
                }
            }
            if(ptr==1){cout<<2<<"\n";}
            else{cout<<1<<"\n";}
        }
        else{
            for(int i=0;i<n;i+=2){
                if(s[i]=='1'||s[i]=='3'||s[i]=='5'||s[i]=='7'||s[i]=='9'){
                    ptr++;
                    break;
                }
            }
            if(ptr==1){cout<<1<<"\n";}
            else{cout<<2<<"\n";}
        }

    }
}

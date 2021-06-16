#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;
typedef vector<int> vi;
typedef vector<long long int> vlli;

#define pb push_back
#define pi 3.1415

const int MOD= 1e9+7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        if(n%2 !=0 || s[0] == '0' || s[n-1] == '0'){cout<<"NO \n";} //odd or starts with 0 or ends with 0
        else{
            int cnt0=0;
            for(int i=0;i<n;i++){if(s[i]=='0'){cnt0++;}}
            int cnt1=n-cnt0;
            if(cnt0 % 2 !=0){cout<<"NO \n";}
            else{
                cout<<"YES \n";
                string a="";string b;
                for(int i=0;i<(n/2);i++){a+="()";}
                for(int i=0;i<n;i++){
                    if(s[i]=='1'){b+=a[i];}
                    else if(s[i]=='0' && a[i]==')'){b+='(';}
                    else {b+=')';}
                }
                cout<<a<<'\n'<<b<<'\n';
            }
        }
    }
    return 0;
}
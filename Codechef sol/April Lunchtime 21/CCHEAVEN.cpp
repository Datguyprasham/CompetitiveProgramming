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
        int n,cnt0=0,cnt1=0,ptr=0;cin>>n;
        string s;cin>>s;
        
        for(int i=0;i<n;i++){
            if(s[i]=='1'){cnt1++;}
            else{cnt0++;}

            if(cnt1>=cnt0){
                ptr=1;
                break;
            }
        }
        if(ptr==1){cout<<"YES \n";}
        else{cout<<"NO \n";}
    }
    return 0;
}
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
        int n;cin>>n;
        string s;cin>>s;
        int cntt=0,cntm=0;
        for(int i=0;i<n;i++){
            if(s[i]=='T')
                cntt++;
            
            else    
                cntm++;
        }

        if(cntt==2*cntm){
            int cnt=0,flag=0;
            for(int i=0;i<n;i++){
                if(s[i]=='T')
                    cnt++;
                else
                    cnt--;
                
                if(cnt<0){
                    flag=1;
                    break;
                }
            }
            reverse(s.begin(),s.end());
            cnt=0;
            for(int i=0;i<n;i++){
                if(s[i]=='T')
                    cnt++;
                else
                    cnt--;
                
                if(cnt<0){
                    flag=1;
                    break;
                }
            }
            if(flag==1){cout<<"NO \n";}
            else{cout<<"YES \n";}
        }
        else{cout<<"NO \n";}
    }
    return 0;
}
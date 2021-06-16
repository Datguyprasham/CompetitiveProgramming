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
        string s;cin>>s;
        int n=s.size();
        bool flag=0;
        if(s[0]==s[n-1]){flag=1;}
        else{
            int cnt=0;
            for(int i=0;i<n;i++){
                if(s[i]==s[0])
                    cnt++;
                else
                    cnt--;
                
                if(cnt<0){
                    flag=1;
                    break;
                }
            }
            if(cnt!=0){flag=1;}
            if(flag==1){
                cnt=0;
                for(int i=0;i<n;i++){
                    if(s[i]==s[0])
                        cnt++;
                    else if(s[i]==s[n-1])
                        cnt--;
                    else    
                        cnt++;
                    if(cnt<0){
                        flag=1;
                        break;
                    }
                }
                if(cnt==0){flag=0;}
            }
        }
        if(flag==0){cout<<"YES \n";}
        else{cout<<"NO \n";}
    }
    return 0;
}
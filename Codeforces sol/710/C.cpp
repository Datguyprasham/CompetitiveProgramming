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
        string a,b;cin>>a>>b;
        int ans,sa=a.size(),sb=b.size();
        ans=sa+sb; //make empty string as initial ans
        
        for(int i=0;i<sa;i++){
            for(int j=i;j<sa;j++){
                string str1=a.substr(i,j-i+1);
                int ans1=sa-(j-i+1);
                int ans2=sb-(j-i+1);
                for(int k=0;k<sb;k++){
                    string str2=b.substr(k,min(sb-k,j-i+1));
                    if(str1==str2)
                        ans=min(ans,ans1+ans2);
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
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
        int n,k;cin>>n>>k;
        vi v(n);
        for(auto &a:v){
            cin>>a;
        }
        int cnt=0,i,j;
        lli sum=accumulate(v.begin(),v.end(),0);
        if(sum<2*k){cout<<-1<<"\n";}
        else{
            int sum1=0,sum2=0;
            sort(v.begin(),v.end());
            reverse(v.begin(),v.end());
            for(i=0,j=1;i<v.size() && j<v.size();i+=2,j+=2){
                sum1+=v[i];sum2+=v[j];
                cnt+=2;
                if(sum1>=k){
                    j=i;i=v.size();
                    while(sum2<k && j<v.size()){
                        sum+=v[j];
                        cnt++;j++;
                    }
                }
            }
            if(sum1<k || sum2<k){cout<<-1<<"\n";}
            else{cout<<cnt<<"\n";}
        }

    }
}

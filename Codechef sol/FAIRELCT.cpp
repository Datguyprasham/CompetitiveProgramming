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
        int n,m;cin>>n>>m;
        lli sum1,sum2;
        vi v1(n);
        for(auto &a:v1)
            cin>>a;
        vi v2(m);
        for(auto &x:v2)
            cin>>x;

        sum1=accumulate(v1.begin(),v1.end(),0);
        sum2=accumulate(v2.begin(),v2.end(),0);
        int a=*min_element(v1.begin(),v1.end());
        int b=*max_element(v2.begin(),v2.end());
        int i=0,j=v2.size()-1;

        if(sum1>sum2){cout<<0<<"\n";}
        else if(a>b){cout<<-1<<"\n";}
        else{
            sort(v1.begin(),v1.end());
            sort(v2.begin(),v2.end());
            while(sum1<=sum2 && i<v1.size() && j>=0){
                sum1=sum1-v1[i]+v2[j];
                sum2=sum2-v2[j]+v1[i];
                i++;j--;
            }
            if(sum1<=sum2){cout<<-1<<"\n";}
            else{cout<<i<<"\n";}
        }
    }
}

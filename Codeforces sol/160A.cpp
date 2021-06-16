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
    int n;cin>>n;

    vi v(n);
    for(auto &a:v)
        cin>>a;
    int sum1=0,sum2=0,cnt=0,i=v.size()-1;
    for(auto x:v)
        sum2+=x;
    sort(v.begin(),v.end());

    while(sum1<=sum2 && i>=0){
        sum1+=v[i];
        sum2-=v[i];
        i--;cnt++;
    }
    cout<<cnt<<"\n";
}

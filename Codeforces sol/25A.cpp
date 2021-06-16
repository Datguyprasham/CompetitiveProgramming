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
    int cnt1=0,cnt2=0,i=0,k,l;
    for(i=0;i<n;i++){
        if(v[i]%2==0){
            cnt1++;
            k=i;
        }
        else{
            cnt2++;
            l=i;
        }
    }
    if(cnt1==1){cout<<k+1<<"\n";}
    else{cout<<l+1<<'\n';}

}

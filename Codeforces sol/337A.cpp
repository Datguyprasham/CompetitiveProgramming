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
    int n,m;cin>>n>>m;
    vi v(m);
    for(auto &a:v)
        cin>>a;

    if(n==m){cout<<(*max_element(v.begin(),v.end())-*min_element(v.begin(),v.end()));}
    else{
        sort(v.begin(),v.end());
        int dif=INT_MAX;
        for(int i=0;i<=v.size()-n;i++){
            dif=min(dif,v[i+n-1]-v[i]);
        }
        cout<<dif<<"\n";
    }
}

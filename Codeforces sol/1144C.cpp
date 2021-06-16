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
    lli n;cin>>n;
    vi v(200*1000 +1);
    for(int i=0;i<n;i++){
        int a;cin>>a;
        ++v[a];
        if(v[a]>2){
            cout<<"NO \n";
            return 0;
        }
    }
    cout<<"YES \n"<<count(v.begin(),v.end(),2)<<'\n';
    for(int i=0;i<=200*1000;i++){
        if(v[i]==2){
            cout<<i<<" ";
            --v[i];
        }
    }
    cout<<'\n';
    cout<<count(v.begin(),v.end(),1)<<'\n';
    for(int i=200*1000;i>=0;--i){
        if(v[i]==1){
            cout<<i<<" ";
            --v[i];
        }
    }
    assert(count(v.begin(), v.end(), 0) == 200 * 1000 + 1);

    return 0;
}
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
    vi v(n);
    for(auto &a:v)
        cin>>a;
    if(n==1 || (n==2 && v[0]==v[1]))
        cout<<-1<<'\n';
    else{
        cout<<1<<'\n';
        int k=*min_element(v.begin(),v.end());
        for(int i=0;i<n;i++){
            if(v[i]==k){
                cout<<i+1<<"\n";
                break;
            }
        }
    }
}

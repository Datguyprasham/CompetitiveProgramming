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
        vi v(m);
        int temp=0;
        while(n--){
            for(int i=0;i<m;i++){
                cin>>v[i];
            }
            sort(v.begin(),v.end());
            if(temp>0)
                rotate(v.begin(),v.begin()+m-temp,v.end());
            for(int i=0;i<m;i++){
                cout<<v[i]<<" ";
            }
            temp++;
            cout<<'\n';
        }
    }
    return 0;
}
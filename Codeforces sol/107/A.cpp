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
        int n,cnt=0;cin>>n;
        int v[n];
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==1 || v[i]==3){cnt++;}
        }
        cout<<cnt<<'\n';
    }
    return 0;
}
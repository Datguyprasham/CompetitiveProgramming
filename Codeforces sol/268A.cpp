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
    int t;cin>>t;
    int h[t],a[t];
    for(int i=0;i<t;i++){
        cin>>h[i];
        cin>>a[i];
    }
    int cnt=0;
    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            if(i!=j && h[i]==a[j])
                cnt++;
        }
    }
    cout<<cnt<<'\n';
}

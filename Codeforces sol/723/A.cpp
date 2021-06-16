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
        int n;cin>>n;
        int size=2*n;
        vi v(size);
        for(auto &a:v){
            cin>>a;
        }
        sort(v.begin(),v.end());
        //i=0,j=2*n-1 i<j
        int i=0,j=2*n-1;
        while(i<j){
            cout<<v[i]<<" "<<v[j]<<" ";
            i++;j--;
        }
        cout<<"\n";
    }
    return 0;
}
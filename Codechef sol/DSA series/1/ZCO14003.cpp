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
    vlli budget(n);
    for(auto &a:budget)
        cin>>a;
    sort(begin(budget),end(budget));
    int i=0,j=n;
    while(i<n && j>0){
        budget[i]*=j;
        j--;i++;
    }
    lli ans=*max_element(begin(budget),end(budget));
    cout<<ans<<'\n';
    return 0;
}
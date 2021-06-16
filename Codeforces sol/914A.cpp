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
    int lar=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if((int) sqrt(x)*(int) sqrt(x)!=x) lar=max(lar,x);
        //perq sqrs sqrts .00000
    }
    cout<<lar<<endl;
}

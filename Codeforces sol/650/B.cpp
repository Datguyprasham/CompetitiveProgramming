#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;
typedef vector<int> vi;
typedef vector<long long int> vlli;

#define pb push_back
#define pi 3.1415

const lli MOD= 1e9+7;

int check1(vector<int> &a)
{
    int cnt=0;
    for(int i=0;i<a.size();i+=2)
    {
        if(a[i]%2!=i%2)cnt++;
    }
    return cnt;
}
int check2(vector<int> &a)
{
    int cnt=0;
    for(int i=1;i<a.size();i+=2)
    {
        if(a[i]%2!=i%2)cnt++;
    }
    return cnt;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    lli t;cin>>t;
    while(t--){
        int n,ans;cin>>n;
        vi a(n);
        for(int i=0;i<n;i++){cin>>a[i];}
        if(check1(a)==check2(a))
            ans=check1(a);
        else
            ans=-1;

        cout<<ans<<'\n';
    }
    return 0;
}
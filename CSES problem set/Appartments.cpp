#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;
typedef vector<int> vi;
typedef vector<long long int> vlli;

#define pb push_back
#define pi 3.1415



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    lli n,m,k,t,ans=0;
    vi people,app;

    cin>>n>>m>>k;
    for(lli i=0;i<n;++i)
    {
        cin>>t;
        people.pb(t);
    }
    for(lli j=0;j<m;++j){
        cin>>t;
        app.pb(t);
    }
    sort(people.begin(),people.end());
    sort(app.begin(),app.end());
    lli i=0,j=0;
    while(i<n && j<m){
        if(abs(people[i]-app[j])<=k){
            ans++;
            i++;
            j++;
        }else if(people[i]<app[j]){i++;}
        else{j++;}
    }
    cout<<ans<<"\n";
}

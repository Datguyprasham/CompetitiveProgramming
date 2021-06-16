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
    int n,a;cin>>n>>a;
    a-=1;
    vi v(n);
    for(auto &x:v){cin>>x;}

    int cnt=0,i=a-1,j=a+1;
    if(v[a]==1){cnt++;}
    
    while(i>-1 || j<n){
        if(i<0 && v[j]==1){
            cnt+=1;
        }
        else if(j>=n && v[i]==1){
            cnt+=1;
        }
        else{
            if(v[i]==v[j] && v[i]==1)
                cnt+=2;
        }
        i--;j++;
    }
    cout<<cnt<<"\n";
    return 0;
}
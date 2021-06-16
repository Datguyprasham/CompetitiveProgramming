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
    int n,d;cin>>n>>d;
    int sum=0;
    vi v(n);
    for(auto &a:v)
        cin>>a;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
    }
    if(sum+(n-1)*10>d){cout<<-1<<'\n';}
    else{cout<<(d-sum)/5<<"\n";}
}

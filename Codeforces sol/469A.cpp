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
    set<int>s;
    int x;cin>>x;
    for(int i=0;i<x;i++){
        int t;cin>>t;
        s.insert(t);
    }
    int y;cin>>y;
    for(int i=0;i<y;i++){
        int r;cin>>r;
        s.insert(r);
    }

    if(s.size()==n){cout<<"I become the guy.";}
    else{cout<<"Oh, my keyboard!";}

}

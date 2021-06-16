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
    int n=4;
    unordered_set<int>s;
    for(int i=0;i<4;i++){
        int x;cin>>x;
        s.insert(x);
    }
    cout<<4-s.size()<<"\n";
    return 0;
}
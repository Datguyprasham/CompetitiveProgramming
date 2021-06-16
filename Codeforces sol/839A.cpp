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
    int n,k,saved=0,i=0;cin>>n>>k;
    while(n--){
        int t;cin>>t;
        saved+=t;
        int temp=min(8,saved);
        saved-=temp;
        k-=temp;
        i++;
        if(k<=0)
            break;
    }
    if(k>0){cout<<-1;}
    else{cout<<i;}
}

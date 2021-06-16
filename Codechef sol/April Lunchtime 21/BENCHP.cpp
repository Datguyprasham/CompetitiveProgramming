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
        int n,w,wr;cin>>n>>w>>wr;
        int wt[n],i=0;
        for(int j=0;j<n;j++){cin>>wt[j];};
        sort(wt,wt+n);
        while(wr<w && i<n-1){
            if(wt[i]==wt[i+1]){
                wr+=2*wt[i];
                i+=2;
            }
            else{i+=1;}
        }
        if(wr>=w){cout<<"YES \n";}
        else{cout<<"NO \n";}
    }
    return 0;
}
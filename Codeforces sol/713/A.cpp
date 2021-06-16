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
        int n,t,a;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){cin>>arr[i];}
        t=arr[0];

        if(arr[1]==arr[2] && t!=arr[1]){cout<<1<<'\n';}
        else{
        for(int i=1;i<=n-1;i++){
            if(t!=arr[i]){
                cout<<i+1<<'\n';
                break;
            }
        }
        }
        
    }
    return 0;
}
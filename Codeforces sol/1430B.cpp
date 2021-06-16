#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        lli n,k;cin>>n>>k;
        lli arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        lli sum=0;
       for(lli i=n-k-1;i<=n-1;i++){
            sum+=arr[i];
       }
       cout<<sum<<"\n";
    }
}

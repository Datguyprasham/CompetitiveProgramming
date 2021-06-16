#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    lli n;cin>>n;
    lli arr[n];
    for(lli i=0;i<n;i++){cin>>arr[i];}
    sort(arr,arr+n);
    lli sum=1,x=arr[0];
    for(lli i=1;i<n;i++){
        if(arr[i]!=x){
            sum++;
            x=arr[i];
        }
    }
    cout<<sum<<"\n";
}

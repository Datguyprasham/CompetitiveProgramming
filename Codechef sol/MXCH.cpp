#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        for(int i=1;i<=k;i++){
            cout<<i<<" ";
        }
        cout<<n<<" ";
        for(int i=k+1;i<n;i++){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}

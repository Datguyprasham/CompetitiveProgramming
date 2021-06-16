#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int len1=ceil(n/2),len2=floor(n/2);
        int a[len2],b[len1];
        for(int i=0;i<len2;i++)
            cin>>a[i];
        for(int i=len1;i<n;i++)
            cin>>b[i];
        for(int i=0;i<=len1;i++){
            cout<<a[i]<<" "<<b[i];
        }
        cout<<"\n";
    }
}

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ull n;cin>>n;
    ull sum= (n*(n+1))/2;
    ull ptr=n-1;
    while(ptr--){
        ull x;cin>>x;
        sum=sum-x;
    }
    cout<<sum;
}

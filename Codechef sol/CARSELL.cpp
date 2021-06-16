#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

const ll MOD = 1e9+7;

int32_t main(){
    int t;cin>>t;
    ll n,sum;
    while(t--){
        cin>>n;
        sum=0;
        ll a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        sort(a,a+n);
        reverse(a,a+n);
        for(int i=0;i<n;i++){
            a[i]=a[i]-i;
            if(a[i]>0){sum+=a[i];}
            else{sum+=0;}

        }
        sum=sum%MOD;
        cout<<sum<<"\n";

    }
}


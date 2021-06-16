#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int n;cin>>n;
    int a[n],p[n];

    for(int i=0;i<n;i++){
        cin>>a[i];cin>>p[i];
    }

    int minimum_cost=*min_element(p,p+n);
    if(minimum_cost==p[0]){
        for(int i=0;i<n;i++){
            int sum += a[i];
        }
        cout<<sum*minimum_cost<<"\n";
    }
    else



}

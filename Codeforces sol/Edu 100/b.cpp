#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        lli n;cin>>n;
        lli arr[n],sumE=0,sumO=0;
        for(lli i=0;i<n;i++){
            cin>>arr[i];
            if(i%2)
                sumO+=arr[i];
            else
                sumE+=arr[i];
        }
        if(sumE>sumO){
            for(lli i=0;i<n;i++){
                if(i%2)
                    cout<<1<<" ";
                else
                    cout<<arr[i]<<" ";
            }
        }
        else{
            for(lli i=0;i<n;i++){
                if(i%2)
                    cout<<arr[i]<<" ";
                else
                    cout<<1<<" ";
        }

    }
    cout<<"\n";
}
}

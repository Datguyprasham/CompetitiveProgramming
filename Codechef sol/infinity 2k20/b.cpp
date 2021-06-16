#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t,n,j,temp,ptr=0;cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int temp=a[0];
        for(int i=0;i<n;i++){
            if(a[i]<temp)
                temp=a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]=a[i+1])
                ptr++;
        }
        j=0;
        while(j<n){
            if(a[j]==temp)
                break;
            j++;
        }
        for(int i=0;i<n;i++){
            a[i]=temp+abs(j-i);

        }
        for(int i=0;i<n;i++){
            if(ptr==n){
                cout<<temp+i<<" ";
            }
            else{
                cout<<a[i]<<" ";
            }

        }

        cout<<"\n";
    }
}

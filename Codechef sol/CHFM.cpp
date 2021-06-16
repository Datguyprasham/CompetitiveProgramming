#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        long long int sum=0,avg=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum%n !=0){
            cout<<"Impossible \n";
            continue;
        }
        avg=sum/n;
        int i=0;
        for(;i<n;i++){
            if(arr[i]==avg){
                cout<<i+1<<"\n";
                break;
            }

        }
        if(i==n){
            cout<<"Impossible \n";
        }


    }
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        long long int n,k;cin>>n;
        long long int arr[n]={0};
        for(int i=1;i<=n;i++){
            cin>>k;
            arr[k]++;
        }
        for(int i=1;i<=n;i++){
            /*if(arr[i]==1){
                cout<<i<<"\n";
                break; */
            cout<<arr[i];
            }

        }
    }


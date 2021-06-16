#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;
typedef vector<int> vi;
typedef vector<long long int> vlli;

#define pb push_back
#define pi 3.1415

const lli MOD= 1e9+7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    lli t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans[n],temp=0;
        for(int i=n-1;i>=0;i--){
            if(arr[i]>0){
                temp=max(arr[i],temp);
            }
            if(temp>0){
                ans[i]=1;
                temp--;
            }
            else{ans[i]=0;}
        }

        for(int i=0;i<n-1;i++){
            cout<<ans[i]<<" ";
        }
        cout<<ans[n-1]<<"\n";
    }
    return 0;
}
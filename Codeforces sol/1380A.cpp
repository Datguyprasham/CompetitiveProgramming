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
        for(int i=0;i<n;i++){cin>>arr[i];}
        int ptr=0;
        for(int i=1;i<n-1;++i){
            if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
                cout<<"YES"<<"\n";
                cout<<i<<" "<<i+1<<" "<<i+2<<"\n";
                break;
            }
            else{ptr++;}
        }
        if(ptr==n-2){cout<<"NO \n";}

    }
}

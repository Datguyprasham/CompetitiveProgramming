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
    int n;cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans=0,cop=0;

    for(int i=0;i<n;i++){
        if(arr[i]==-1 && cop==0)
            ans++;
        
        else{
            cop+=arr[i];
        }
    }
    cout<<ans<<"\n";
    return 0;
}
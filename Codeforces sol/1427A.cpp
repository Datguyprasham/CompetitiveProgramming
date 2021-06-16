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
        int arr[n],sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum==0){cout<<"NO \n";}
        else{
            cout<<"YES \n";
            if(sum>0)
                sort(arr,arr+n,greater<int>());
            else
                sort(arr,arr+n);
            int sum2=0;
            if(arr[0]==0){swap(arr[0],arr[n-1]);}
            for(int i=0;i<n;i++){
                sum2+=arr[i];
                if(sum2!=0)
                    cout<<arr[i]<<" ";
                
                else
                    swap(arr[i],arr[n-1]);
            }
            cout<<"\n";
        }
        
    }
    return 0;
}
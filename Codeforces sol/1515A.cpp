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
        int n,x;cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        int sum=accumulate(arr,arr+n,0);
        if(sum==x)
            cout<<"NO \n";
        else if(arr[0]==x && arr[0]==arr[n-1])
            cout<<"NO \n";
        else{
            if(arr[0]==x)
                swap(arr[0],arr[n-1]);
            sum=0;
            cout<<"YES \n";
            for(int i=0;i<n;i++){
                if(sum+arr[i]==x)
                    swap(arr[i],arr[n-1]);
                sum+=arr[i];
                cout<<arr[i]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
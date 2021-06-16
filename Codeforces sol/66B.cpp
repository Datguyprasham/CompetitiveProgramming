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
    for(int i=0;i<n;i++){cin>>arr[i];}

    int maxv=0;
    for(int i=0;i<n;i++){
       int temp=arr[i],cnt=1;
       for(int j=i-1;j>-1;j--){
           if(arr[j]<=temp){
               temp=arr[j];
               cnt++;
            }
           else
                break;
            
       }
       temp=arr[i];
       for(int j=i+1;j<n;j++){
           if(arr[j]<=temp){
               temp=arr[j];
               cnt++;
            }
            else
                break;

       }
       if(maxv<cnt){maxv=cnt;}
    }
    cout<<maxv<<"\n";
    return 0;
}
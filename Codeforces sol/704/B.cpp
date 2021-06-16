#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;
typedef vector<int> vi;
typedef vector<long long int> vlli;

#define pb push_back
#define pi 3.1415

const lli MOD= 1e9+7;

//find max and print from that posn, find new max of arr repeat
// int findmax(vi &v,int n){
//     int temp=*max_element(v.begin(),v.end());
//     int i=n-1;
//         while(v[i]!=temp && i>0)
//             i--;       
//     return i;
// }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    lli t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n],pos[n+1]={0};
        for(int i=0;i<n;i++){
            cin>>arr[i];
            pos[arr[i]]=i;
        }

        int start=0,end=n;
        for(int i=n;i>0;i--){
            start=pos[i];
            if(end>start){
                for(int j=start;j<end;j++){
                    cout<<arr[j]<<" ";
                }
                end=start;
            }
        }
        cout<<"\n";
    }
    return 0;
}
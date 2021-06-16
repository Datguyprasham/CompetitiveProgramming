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
        int n,m;cin>>n>>m;
        int sum=0,cnt=0,minelem=10000;
        int arr[n][m];
        bool flag=false;
        //read
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
                if(arr[i][j]==0)
                    flag=true;
                
                else if(arr[i][j]<0){
                    cnt++;
                    arr[i][j]*=-1;
                }
                if(arr[i][j]<minelem)
                    minelem=arr[i][j];

                sum+=arr[i][j];
            }
        }  
        if(cnt%2==0){cout<<sum<<"\n";}
        else{cout<<sum-2*minelem<<"\n";}
    }
    return 0;
}
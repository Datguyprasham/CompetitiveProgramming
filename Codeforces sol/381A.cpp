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

    int i=0,j=n-1,cnt=0,sp=0,dp=0,temp=0;
    while(i<=j){
        if(arr[i]>=arr[j]){
            temp=arr[i];
            i++;
        }
        else{
            temp=arr[j];
            j--;
        }
        
        if(cnt%2==0){sp+=temp;}
        else{dp+=temp;}
        cnt++;
    }
    cout<<sp<<" "<<dp<<"\n";
    return 0;
}
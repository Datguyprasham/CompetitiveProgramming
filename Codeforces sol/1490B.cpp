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
        int n,c0=0,c1=0,c2=0;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%3==0)
                c0++;
            else if(arr[i]%3 ==1)
                c1++;
            else
                c2++;
        }
        int ans=0;
        int req=n/3;
        while(c0<req){
            if(c2>req){
                c2--;c0++;ans++;
            }
            else{
                c1--;c0++;ans+=2;
            }
        }
        while(c1<req){
            if(c0>req){
                c0--;c1++;ans++;
            }
            else{
                c2--;
                c1++;
                ans+=2;
            }
        }
        while(c2<req){
            if(c1>req){
                c1--;c2++;ans++;
            }
            else{
                c0--;c2++;ans+=2;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}
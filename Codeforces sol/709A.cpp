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
    
    int n,b,d;cin>>n>>b>>d;
    int arr[n],sum=0,cnt2=0;
    for(int i=0;i<n;i++){cin>>arr[i];}
    for(int i=0;i<n;i++){
        if(arr[i]>b)
            continue;
        else{
            sum+=arr[i];
            if(sum>d){cnt2++;sum=0;}
        }
    }
    cout<<cnt2<<"\n";
    return 0;
}
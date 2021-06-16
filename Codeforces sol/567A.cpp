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
    sort(arr,arr+n);
    cout<<abs(abs(arr[0])-abs(arr[1]))<<" "<<abs(arr[0])+abs(arr[n-1])<<"\n";

    for(int i=1;i<n-1;i++){
        cout<<min(abs(abs(arr[i])-abs(arr[i-1])),abs(abs(arr[i])-abs(arr[i+1])))<<" "<<max(abs(arr[i])+abs(arr[n-1]),abs(arr[i])+abs(arr[0]))<<"\n";
    }
    cout<<abs(abs(arr[n-1])-abs(arr[n-2]))<<" "<<abs(arr[0])+abs(arr[n-1])<<"\n";
    return 0;
}
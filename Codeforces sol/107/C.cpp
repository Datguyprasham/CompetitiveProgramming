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
    lli n,q;cin>>n>>q;
    int arr[n],query[q],j,t;
    for(int i=0;i<n;i++){cin>>arr[i];}
    for(int i=0;i<q;i++){cin>>query[i];}
    while(t<q){
        for(int i=0;i<n;i++){
            if(arr[i]==query[t]){
                cout<<i+1<<' ';
                j=i;
                break;
            }
        }

        for(int i=j;i<=0;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=query[t];
        t++;
        }
    return 0;
}
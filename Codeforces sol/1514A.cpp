#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;
typedef vector<int> vi;
typedef vector<long long int> vlli;

#define pb push_back
#define pi 3.1415

const lli MOD= 1e9+7;

bool issquare(int x){
    int y=sqrt(x);
    return y*y==x;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    lli t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int cnt=0;
        for(int i=0;i<n;i++){
            if(issquare(arr[i]))
                cnt++;
        }

        if(cnt==n)
            cout<<"NO \n";
        else    
            cout<<"YES \n";
    }
    return 0;
}
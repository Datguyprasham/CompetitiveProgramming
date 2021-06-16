#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;
typedef vector<int> vi;
typedef vector<long long int> vlli;

#define pb push_back
#define pi 3.1415

const lli MOD= 1e9+7;

bool issquare(int n){
    int temp=sqrt(n);
    return temp*temp==n;
}

//no odd numbers , even - 2 4 8 16 (1<<x?) ,18 ,32,36

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    lli t;cin>>t;
    while(t--){
        lli n;cin>>n;
        if(n%2==0 && issquare(n/2))
            cout<<"YES \n";

        else if(n%4==0 && issquare(n/4))
            cout<<"YES \n";
        
        else 
            cout<<"NO \n";
    }
    return 0;
}
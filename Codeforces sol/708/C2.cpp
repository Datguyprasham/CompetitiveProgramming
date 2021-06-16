#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;
typedef vector<int> vi;
typedef vector<long long int> vlli;

#define pb push_back
#define pi 3.1415

const lli MOD= 1e9+7;

//LCM(1111)=1 (c1)  k=4 1 a1 a2 a3

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    lli t;cin>>t;
    while(t--){
        lli n,k;cin>>n>>k;
        lli temp=k-3;
        for(int i=1;i<=temp;i++){
            cout<<1<<" ";
        }
        lli a1,a2,a3;
        n=n-(k-3);
        if(n%2==0 && n%4==0){
            a1=n/2;
            n/=2;
            a2=a3=(n/2);
        }
        else if(n%2==0 && n%4!=0){
            a1=2;
            n-=2;
            a2=a3=(n/2);
        }
        else{
            a1=1;
            n--;
            a2=a3=(n/2);
        }
        cout<<a1<<" "<<a2<<" "<<a3<<"\n";

    }
    return 0;
}
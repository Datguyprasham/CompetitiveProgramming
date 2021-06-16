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

    lli n;cin>>n;
    lli sum=0;
    if(n==1 || n==2){cout<<"NO \n";}
    else{
        sum=(n*(n+1))/2;
        if(sum & 1){
            cout<<"NO \n";
        }
        else{
            cout<<"YES \n";
            sum/=2;
            vlli arr1,arr2;
            while(n){
                if(sum-n>=0){
                    arr1.pb(n);
                    sum-=n;
                }
                else{
                    arr2.pb(n);
                }
                n--;
            }
            cout<<arr1.size()<<"\n";
            for(auto &a:arr1)
                cout<<a<<" ";
            cout<<"\n";
            cout<<arr2.size()<<'\n';
            for(auto &x:arr2)
                cout<<x<<" ";
        }

    }
    return 0;
}
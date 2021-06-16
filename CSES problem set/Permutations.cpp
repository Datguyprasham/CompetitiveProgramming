#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ull n;cin>>n;
    if(n==2 || n==3)
        cout<<"NO SOLUTION";
    else{
        for(int i=2;i<n;i++){
            if(i%2==0)
                cout<<i<<" ";
        }
        if(n%2==0)
            cout<<n<<" ";
        for(int i=1;i<n;i++){
            if(i%2!=0)
                cout<<i<<" ";
        }
        if(n%2!=0)
            cout<<n;
    }

}

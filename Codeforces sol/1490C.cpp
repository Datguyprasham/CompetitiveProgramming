#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;
typedef vector<int> vi;
typedef vector<long long int> vlli;

#define pb push_back
#define pi 3.1415

const lli MOD= 1e9+7;
const lli MAX=1e12;

//b<=10^4 
unordered_set<lli>cube;
void store(){
    for(lli i=1;i*i*i<=MAX;i++){
        cube.insert(i*i*i);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    store();

    lli t;cin>>t;
    while(t--){
        lli n;cin>>n;
        bool flag=0;
        for(lli i=1;i*i*i<=n;i++){
            if(cube.count(n-i*i*i)){
                flag=1;
                break;
            }
        }
        if(flag==0){cout<<"NO \n";}
        else{cout<<"YES \n";}
    }
    return 0;
}
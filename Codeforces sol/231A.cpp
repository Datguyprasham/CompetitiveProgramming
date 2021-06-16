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
    int cnt=0;
    while(n--){
        int sum=0;
        for(int i=0;i<3;i++){
            int x;cin>>x;
            sum+=x;
        }
        if(sum>=2){cnt++;}
    }
    cout<<cnt<<"\n";
    return 0;
}
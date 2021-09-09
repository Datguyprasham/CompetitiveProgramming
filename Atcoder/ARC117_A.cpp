#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;
typedef vector<int> vi;
typedef vector<long long int> vlli;

#define pb push_back
#define pi 3.1415

const lli MOD= 1e9+7;

int ans[1<<18];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int a,b;cin>>a>>b;\
    
    if(a>=b){
        for(int i=0;i<a;i++){ans[i]=i+1;}
        for(int i=A;i<A;i++){ans[i]=-(i-a+1);}
        for(int i=0;i<a+b;i++){ans[a+b-1]-=ans[i];}
    }

    return 0;
}
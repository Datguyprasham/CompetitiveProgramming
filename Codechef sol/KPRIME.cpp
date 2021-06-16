#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;
typedef vector<int> vi;
typedef vector<long long int> vlli;

#define pb push_back
#define pi 3.1415

const lli MOD= 1e9+7;


int sieve(int a,int b,int k) {
    vector<int> primes, is_prime(b + 1, 1);
    int i,j;
    for ( i = 2; i <= b; i++)
        if (is_prime[i]){
            primes[i]=1;
            j=2;
            while(i*j<=b){
                is_prime[i*j]=0;
                primes[i*j]++;
                j+=1;
            }
        }
        int cnt=0;
        for(int i=a;i<=b;i++)
            if(primes[i]==k)
                cnt++;
    return cnt;
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    lli t;cin>>t;
    while(t--){
        int a,b,k;cin>>a>>b>>k;
        cout<<sieve(a,b,k)<<"\n";
    }
    return 0;
}
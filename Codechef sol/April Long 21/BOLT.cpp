#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;
typedef vector<int> vi;
typedef vector<long long int> vlli;

#define pb push_back
#define pi 3.1415

const lli MOD= 1e9+7;


float roundoff(float var)
{
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}
  

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    lli t;cin>>t;
    while(t--){
        float k1,k2,k3,wr=9.58,v;cin>>k1>>k2>>k3>>v;
        float speed=k1*k2*k3*v;
        float time= (float) 100/speed ;
        float finaltime=roundoff(time);
        if(finaltime<wr){cout<<"YES \n";}
        else{cout<<"NO \n";}
    }
    return 0;
}
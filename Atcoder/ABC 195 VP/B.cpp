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
    int a,b,w;cin>>a>>b>>w;
    w=w*1000;
    int h=w/a,l;
    if(w%a > h*(b-a))
        cout<<"UNSATISFIABLE \n";
    else{
        if(w%b==0)
            l=w/b;

        else 
            l=w/b+1;
        
        cout<<l<<" "<<h<<"\n";
    }
    return 0;
}
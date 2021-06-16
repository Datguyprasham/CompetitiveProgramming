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
    string st;cin>>st;
    string ins;cin>>ins;

    int i=0,j=0;
    while(j<ins.size()){
        if(st[i]==ins[j]){
            i++;j++;
        }
        else{j++;}
    }

    cout<<i+1<<"\n";

    return 0;
}
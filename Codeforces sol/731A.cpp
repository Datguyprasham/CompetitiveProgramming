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
    
    string s;cin>>s;
    int moves=0,start=0;
    for(int i=0;i<s.length();i++){
        int index=s[i]-97;

        int temp=abs(start-index);
        if(temp<13){moves+=temp;}
        else{moves+=26-temp;}
        start=index;
    }
    cout<<moves<<"\n";
    return 0;
}
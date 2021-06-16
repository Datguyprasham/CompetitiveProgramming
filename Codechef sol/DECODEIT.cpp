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
    int t;cin>>t;
    while(t--){
        int n,i=0;cin>>n;
        string s;cin>>s;
        string ans="";
        while(i<n){
            string str=s.substr(i,4);
            if(str=="0000"){ans+='a';}
            else if(str=="0001"){ans+='b';}
            else if(str=="0010"){ans+='c';}
            else if(str=="0011"){ans+='d';}
            else if(str=="0100"){ans+='e';}
            else if(str=="0101"){ans+='f';}
            else if(str=="0110"){ans+='g';}
            else if(str=="0111"){ans+='h';}
            else if(str=="1000"){ans+='i';}
            else if(str=="1001"){ans+='j';}
            else if(str=="1010"){ans+='k';}
            else if(str=="1011"){ans+='l';}
            else if(str=="1100"){ans+='m';}
            else if(str=="1101"){ans+='n';}
            else if(str=="1110"){ans+='o';}
            else{ans+='p';}
            i+=4;
        }
        cout<<ans<<"\n";
    }
}

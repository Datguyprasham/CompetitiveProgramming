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
    lli t;cin>>t;
    while(t--){
        lli n;cin>>n;

        if(n<=9)
            cout<<n<<"\n";
        else{
            string s = to_string(n);
            lli size = s.size();
            lli no=1;
            size--;
            lli count= size*9;
    
            while(size--)
                no=(no*10)+1;
            
            count=count+n/no;
            cout<<count<<"\n";

        }
    }
    return 0;
}





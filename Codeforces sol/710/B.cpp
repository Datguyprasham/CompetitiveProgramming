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
        int n,k;cin>>n>>k;
        string s;cin>>s;
        int cnt=0;
        int i=s.find_first_of('*');
        while (true) {
            int j = min(n - 1, i + k);
            for (; i < j && s[j] == '.'; j--) {}
            if (i == j) {
                break;
            }
            cnt++;
            i = j;
        }
        cout<<cnt+1<<"\n";
    }
    return 0;
}
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
    int len = n * n;
    int j = 1 ,r = n , i = 1;
    while(j <= n * n)
    {
        if(r == 0)
        {
            cout << "\n";
            r=n;
        }
        r--;
        if(j % 2 == 1)
        {
            cout << i;
            i++;
        }
        if(j % 2 == 0)
        {
            cout << len;
            len--;
        }
        cout << " ";
        j++;
    }
}

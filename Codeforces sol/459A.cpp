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
    int x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
    if (x1 != x2 && y1 != y2 && abs(x1 - x2) != abs(y1 - y2))
        cout << -1 <<"\n";
    else if (x1 == x2)
        cout << x1 + abs(y1 - y2) << " " << y1 << " " << x2 + abs(y1 - y2) << " " << y2 <<"\n";
    else if (y1 == y2)
        cout << x1 << " " << y1 + abs(x1 - x2) << " " << x2 << " " << y2 + abs(x1 - x2) <<"\n";
    else
        cout << x1 << " " << y2 << " " << x2 << " " << y1 <<"\n";
}

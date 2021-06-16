#include <bits/stdc++.h>
using namespace std;


long long gcd (int a, int b) {
    if (b == 0)
        return a;
    
    return gcd (b, a % b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int x,y;cin>>x,y;
        int ans = gcd(x,y);
        int lcm= ((x*y)/ans );
        cout<<ans<<" "<<lcm<<"\n";
    }
    return 0;
}
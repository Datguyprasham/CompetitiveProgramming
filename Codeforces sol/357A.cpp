#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,val;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>val;
        v.push_back(val);
    }
    int x,y;
    cin >> x >> y;
    vector<ll> prefix(n);
    prefix[0] = v[0];
    for(int i = 1;i < n;i++){
        prefix[i] = prefix[i-1]+v[i];
    }
    ll sum = prefix[n-1];
    int no = 0;
    for(int i = 0;i < n;i++){
        if(x <= prefix[i] && prefix[i] <= y&& (sum-prefix[i]) <= y && (sum - prefix[i]) >= x){
            no = i+2;
            break;
        }
    }
    cout << (no <= n?no:0);
}

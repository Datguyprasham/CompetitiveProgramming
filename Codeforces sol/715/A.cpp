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
        int n;cin>>n;
        vi odd,even;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            if(x%2==0)
                even.pb(x);
            else
                odd.pb(x);
        }

        if(odd.size()!=0 && even.size()!=0){
            for(int i=0;i<odd.size();i++){
                cout<<odd[i]<<" ";
            }
            for(int i=0;i<even.size();i++){
                if(i==even.size()-1){
                    cout<<even[i];
                }
                else
                    cout<<even[i]<<" ";
            }
            cout<<"\n";
        }
        else if(odd.size()==0){
            for(int i=0;i<even.size();i++){
                if(i==even.size()-1){
                    cout<<even[i];
                }
                else
                    cout<<even[i]<<" ";
            }
            cout<<"\n";
        }
        else{
            for(int i=0;i<odd.size();i++){
                if(i==odd.size()-1){
                    cout<<odd[i];
                }
                else
                    cout<<odd[i]<<" ";
            }
            cout<<"\n";
        }

    }
    return 0;
}
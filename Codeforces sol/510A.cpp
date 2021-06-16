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
    int n,m;cin>>n>>m;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            if((i-2)%4==0){
            int j=1;
            while(j<m){
                cout<<".";
                j++;
            }
            cout<<"#"<<"\n";
        }
        else{
            cout<<"#";
            int p=1;
            while(p<m){
                cout<<".";
                p++;
            }
            cout<<"\n";
        }
        }
        else{
            int k=1;
            while(k<=m){
                cout<<"#";
                k++;
            }
            cout<<"\n";
        }
    }
}

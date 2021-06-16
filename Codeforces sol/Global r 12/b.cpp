#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int x[n],y[n];
        for(int i=0;i<n;i++){
            cin>>x[i];
            cin>>y[i];
        }
        bool istrue=false;
        for(int i=0;i<n;i++){
            int ptr=0;
            for(int j=0;j<n;j++){
                if(abs(x[i]-x[j])+abs(y[i]-y[j])<=k)
                    ptr++;
                else
                    break;
            }
            if(ptr==n)
                istrue=true;
        }
        if(istrue)
            cout<<1<<"\n";
        else
            cout<<-1<<"\n";
    }
}

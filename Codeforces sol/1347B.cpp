#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int ptr=0;
        while(n!=1){
            if(n%6==0){
                n=n/6;
                ptr++;
            }

            else{
                n=n*2;
                ptr++;}
        }
        if(ptr==INT_MAX){
            cout<<-1<<"\n";
        }
        else{
            cout<<ptr<<"\n";}
    }
}

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int x;cin>>x;
        int sum=0,lastdig=9;
        vector<int>number;
        if(x>45)
            cout<<-1<<"\n";
        else if(x<10)
            cout<<x<<"\n";
        else{
            while(sum<x && lastdig>0){
            number.push_back(min(x-sum,lastdig));
            sum+=min(x-sum,lastdig);
            lastdig--;
        }
        for(int i=number.size()-1;i>=0;--i){
            cout<<number[i];
        }
        cout<<"\n";
        }

    }
}

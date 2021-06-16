#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;cin>>t;
    int x,y;
    while(t--){
        cin>>x>>y;
        if(x==y){
            cout<<0<<"\n";
        }
        else if(x%2==0 && y%2==0 && x!=0 && y!=0 ){
            cout<<3<<"\n";
        }
        else if(x%2!=0 && y%2!=0 && x!=0 && y!=0){cout<<3<<"\n";}
        else if(x%2!=0 && y%2==0 && x!=0 && y!=0){cout<<1<<"\n";}
        else if(x%2==0 && y%2!=0 && x!=0 && y!=0){cout<<1<<"\n";}
        else if(x==0 && y<0 && y%2 ==0){cout<<1<<"\n";}
        else if(x==0 && y<0 && y%2 !=0){cout<<3<<"\n";}
        else if(x==0 && y>0 && y%2 ==0){cout<<3<<"\n";}
        else if(x==0 && y>0 && y%2 !=0){cout<<1<<"\n";}
        else if(x>0 && y==0 && x%2 ==0){cout<<1<<"\n";}
        else if(x>0 && y==0 && x%2 !=0){cout<<3<<"\n";}
        else if(x<0 && y==0 && x%2 ==0){cout<<3<<"\n";}
        else if(x<0 && y==0 && x%2 !=0){cout<<1<<"\n";}




    }
}

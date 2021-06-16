#include <bits/stdc++.h>

using namespace std;

int32_t main(){
    int t;cin>>t;
    long long int x1,y1,x2,y2,sum;
    while(t--){
        sum=0;
        cin>>x1>>y1>>x2>>y2;
        if(x1==x2 && y1==y2)
            cout<<0<<"\n";
        else if(x1==x2 || y1==y2)
            cout<<abs(x2-x1)+abs(y2-y1)<<"\n";
        else{
            sum=abs(x2-x1)+abs(y2-y1)+2;
            cout<<abs(sum)<<"\n";
        }
    }

}

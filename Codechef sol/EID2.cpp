#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int32_t main(){
    int t;cin>>t;
    while(t--){
        int a[3],c[3];
        int f=0,nf=0;
        for(int i=0;i<3;i++)
            cin>>a[i];

        for(int i=0;i<3;i++)
            cin>>c[i];

        for(int i=0;i<3;i++){
            for(int j=i+1;j<3;j++){
                if(a[i]>a[j] && c[i]>c[j])
                    f++;
                else if(a[i]<a[j] && c[i]<c[j])
                    f++;
                else if(a[i]==a[j] && c[i]==c[j])
                    f++;
                else{
                    nf=1;
                    break;
                }

            }

        }
        if(nf==1)
            cout<<"NOT FAIR \n";
        else
            cout<<"FAIR \n";
    }
}

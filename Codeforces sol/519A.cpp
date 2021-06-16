#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int sumW=0,sumB=0;
    int t=8;
    while(t--){
        string s;cin>>s;
        int len= s.size()/sizeof(s[0]);
        for(int i=0;i<len;i++){
            if(s[i]=='Q')
                sumW+=9;
            else if(s[i]=='R')
                sumW+=5;
            else if(s[i]=='B')
                sumW+=3;
            else if(s[i]=='N')
                sumW+=3;
            else if(s[i]=='P')
                sumW+=1;
            else if(s[i]=='K')
                sumW+=0;
            else if(s[i]=='q')
                sumB+=9;
            else if(s[i]=='r')
                sumB+=5;
            else if(s[i]=='b')
                sumB+=3;
            else if(s[i]=='n')
                sumB+=3;
            else if(s[i]=='p')
                sumB+=1;
            else if(s[i]=='k')
                sumB+=0;
        }
    }
    if(sumW>sumB)
        cout<<"White";
    else if(sumB>sumW)
        cout<<"Black";
    else
        cout<<"Draw";
}

#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int count=0;
    char s[20];
    cin>>s;
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='4'|| s[i]=='7'){
            count+=1;
        }
    }
    if(count==4 || count==7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}

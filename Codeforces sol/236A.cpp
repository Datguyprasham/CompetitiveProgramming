#include <iostream>
#include <string>

using namespace std;

int main(){
    int len;
    string name;
    getline(cin,name);
    string name2;

    for(int i=0;i<name.length();i++){
        if(name2.find(name[i])==string::npos){
            name2.push_back(name[i]);
        }
    }
    len=name2.length();
    if(len % 2 ==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}

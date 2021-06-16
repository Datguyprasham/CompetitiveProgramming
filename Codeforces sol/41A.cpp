#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(){
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    string temp;

    for(int i=s2.length()-1;i>=0;i--){
        temp.push_back(s2[i]);
    }
    if(s1.compare(temp)==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}

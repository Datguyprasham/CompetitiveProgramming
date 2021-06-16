#include <iostream>

using namespace std;

int main(){
    int n,a[]={4,7,47,74,447,474,477,744,747,774},count=0;
    cin>>n;
    for(int i=0;i<10;i++){
        if(n==a[i] || n%a[i]==0){
            cout<<"YES"<<endl;
            break;
        }
        else{count++;}
    }
    if(count==10){
        cout<<"NO"<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;

int main(){
    int k,n,w,total,borrow;
    cin>>k>>n>>w;

    total=k*w*(w+1)/2;
    if(total>n){
        borrow=total-n;
        cout<<borrow<<endl;
    }
    else{cout<<0;}
    return 0;
}

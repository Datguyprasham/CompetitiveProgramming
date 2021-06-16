#include <iostream>

using namespace std;

int main(){
    int n,sum,a[1000],b[1000],largest=0,k;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    k=a[0];
    for(int j=0;j<n;j++){
        sum=b[j]-a[j]+k;
        k=sum;
        if(sum>largest){
            largest=sum;
        }
    }
    cout<<largest<<endl;
    return 0;
}

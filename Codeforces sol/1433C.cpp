#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        lli n;cin>>n;
        lli arr[n];
        for(lli i=0;i<n;i++){
            cin>>arr[i];
        }
        lli ptr=0;
        lli highest=*max_element(arr,arr+n);
        for(lli x:arr){
            if(x==highest)
                ptr++;
        }
        if(ptr==1){
            for(lli i=0;i<n;i++){
                if(arr[i]==highest){
                    cout<<i+1<<"\n";
                    break;
                }
            }
        }
        else if(ptr==n){
            cout<<-1<<"\n";
        }
        else{
           for(lli it=0;it<n;it++){
            if(arr[it]==highest && it==0){
                if((arr[it]>arr[it+1])){
                        cout<<it+1<<"\n";
                        break;
                    }
                }
                if(arr[it]==highest && it!=0){
                    if((arr[it]>arr[it+1]||(arr[it]>arr[it-1]))){
                        cout<<it+1<<"\n";
                        break;
                    }
                }
            }
        }

    }
}

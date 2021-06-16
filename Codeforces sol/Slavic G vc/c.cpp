#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m=*max_element(arr,arr+n);
    int r=ceil(m/2);
    int r2=floor(m/2);
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++){
        sum1+=abs(arr[i]-r);
    }
    for(int i=0;i<n;i++){
        sum2+=abs(arr[i]-r2);
    }
    cout<<min(sum1,sum2);

}

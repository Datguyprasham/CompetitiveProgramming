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
    int ptr1=1,ptr2=1;
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1])
            ptr1++;
        else
            break;
    }
    for(int i=n-2;i>=0;i--){
        if(arr[i]>=arr[i+1])
            ptr2++;
        else
            break;
    }

    if(ptr1 != n && ptr2 != n && ptr1+ptr2<n){
        cout<<ptr1+ptr2;
    }
    else if(ptr1+ptr2>n && ptr1!=n && ptr2!=n)
        cout<<ptr1+ptr2-1;
    else
        cout<<ptr1;

}

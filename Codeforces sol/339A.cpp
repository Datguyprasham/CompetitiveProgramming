#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;
typedef vector<int> vi;
typedef vector<long long int> vlli;

#define pb push_back
#define pi 3.1415

const lli MOD= 1e9+7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;cin>>s;
    int sign=s.size()/2;
    char arr[sign+1];
    for(int i=0;i<s.size();i++){
        if(s[i]=='1' || s[i]=='2' || s[i]=='3')
            arr[i]=s[i];
    }
    sort(arr,arr+(sign+1));
    for(int i=0,j=0;i<sign+1,j<sign;i++,j++){
        cout<<arr[i]<<'+';
    }
    return 0;
}
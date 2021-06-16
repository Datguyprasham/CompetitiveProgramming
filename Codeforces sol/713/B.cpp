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
    lli t;cin>>t;
    while(t--){
        int n;cin>>n;
        vi v;
        vector<vector<char>> arr(n,vector<char>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
                if(arr[i][j]=='*'){
                    v.push_back(i);
                    v.push_back(j);}
            }
        }
        if(v[0]!=v[2] && v[1] != v[3]){
            arr[v[0]][v[3]]='*';
            arr[v[2]][v[1]]='*';
        }

        else if(v[0]==v[2]){
            arr[n-v[0]+1][v[1]]='*';
            arr[n-v[0]+1][v[3]]='*';
        }
        else if(v[1]==v[3]){
            arr[v[1]][n-v[1]+1]='*';
            arr[v[3]][n-v[1]+1]='*';
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j];
            }
            cout<<'\n';
        }

    }
    return 0;
}
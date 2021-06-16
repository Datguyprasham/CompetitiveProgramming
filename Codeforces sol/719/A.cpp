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
        int n,flag=0;cin>>n;
        string s;cin>>s;
        
        unordered_map<char, int> freq;
        for(int i=0;i<n;i++){
            freq[s[i]]++;
            while(s[i]==s[i+1])
                i++;
        }

        int f=0;
        for (auto x : freq){
            if(x.second > 1){
                f=1;
                break;
            }
        }
	
	    if(f==0)
	        cout<<"YES"<<endl;
        else
	    cout<<"NO"<<endl;

    }
    return 0;
}



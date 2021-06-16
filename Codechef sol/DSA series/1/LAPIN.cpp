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
        string s;cin>>s;
        unordered_map<char,int>mp;
        int mid;
        if(s.size()%2==0){
            mid=s.size()/2;
            for(int i=0;i<mid;i++){
                mp[s[i]]++;
            }
            for(int i=mid;i<s.size();i++){
                mp[s[i]]--;
            }
            int ptr=0;
            for(auto x:mp){
                if(x.second==0)ptr++;
            }
            if(ptr==mp.size())cout<<"YES \n";
            else cout<<"NO \n";
        }
        else{
            mid=(s.size()-1)/2;
            for(int i=0;i<mid;i++){
                mp[s[i]]++;
            }
            for(int i=mid+1;i<s.size();i++){
                mp[s[i]]--;
            }
            int ptr=0;
            for(auto x:mp){
                if(x.second==0)ptr++;
            }
            if(ptr==mp.size())cout<<"YES \n";
            else cout<<"NO \n";
        }
    }
    return 0;
}
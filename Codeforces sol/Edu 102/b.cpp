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
        string s1,s2;cin>>s1>>s2;
        int len1=s1.size(),len2=s2.size();
        int h=len1*len2;
        int a1=count(s1.begin(),s1.end(),'a');
        int a2=count(s2.begin(),s2.end(),'a');
        int b1=count(s1.begin(),s1.end(),'b');
        int b2=count(s2.begin(),s2.end(),'b');
        if(s1==s2)
            cout<<s1<<"\n";
        else if(a1==0 && a2==0){
            while(h--)
                cout<<'b';
            cout<<"\n";
        }
        else if(b1==0 && b2==0){
            while(h--)
                cout<<'a';
            cout<<'\n';
        }
        else if(s1.size()%2==0 && s2.size()%2==0 && (a1!=0 && a2!=0 && b1!=0 && b2!=0))
            cout<<(s1.size()>s2.size()?s1:s2)<<"\n";

        else
            cout<<-1<<'\n';
    }
}

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
        lli n,m,k;cin>>n>>m>>k;
        double matrix[n+1][m+1];   
        for(lli i=0;i<=n;i++){
            for(lli j=0;j<=m;j++){
                
                if(i==0 || j==0){
                    matrix[i][j]=0;
                }
                else{
                    cin>>matrix[i][j];
                }

            }
        }

        for(lli i=0;i<=n;i++){
            double t=0;
            for(lli j=0;j<=m;j++){
                matrix[i][j]+=t;
                t=matrix[i][j];
            }
        }

        for(lli j=0;j<=m;j++){
            double t=0;
            for(lli i=0;i<=n;i++){
                matrix[i][j]+=t;
                t=matrix[i][j];
            }
        }

        lli x=min(m,n);
	    lli l,cnt=0;
	     for(lli l=1;l<=x;l++)
	     {
	         
	         for(lli i=l;i<=m;i++)
	         {
	             for(lli j=l;j<=n;j++)
	             {
	                 
	                if((matrix[i][j]+matrix[i-l][j-l]-matrix[i][j-l]- matrix[i-l][j])/(l*l) >=k){
                        cnt++;
                    }
                 }
             }
	     }

         cout<<cnt<<'\n';
    }
    return 0;
}
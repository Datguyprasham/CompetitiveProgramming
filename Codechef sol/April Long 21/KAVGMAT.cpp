#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;
typedef vector<int> vi;
typedef vector<long long int> vlli;

#define pb push_back
#define pi 3.1415

const lli MOD= 1e9+7;

int main()
{
   
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   ull t;cin>>t;
   while(t--)
	{
         lli m,n,k,data;
         cin>>m>>n>>k;
	    double  matrix[m][n];
	    double auxiliary[m][n];
	     for(lli i=0;i<m;i++)
	     {
	         for(lli j=0;j<n;j++)
	           {
	               cin>> matrix[i][j];
	           }
	     }


	     //copy row 
	    for (lli i=0; i<n; i++)
            auxiliary[0][i] =  matrix[0][i];
  
        //column wise sum
        for (lli i=1; i<m; i++)
            for (lli j=0; j<n; j++)
                auxiliary[i][j] =  matrix[i][j] + auxiliary[i-1][j];
  
        //row wise sum 
        for (lli i=0; i<m; i++)
            for (lli j=1; j<n; j++)
                auxiliary[i][j] += auxiliary[i][j-1];
	     
	     
	 
	    
	    lli x=min(m,n);
	    lli l,cnt=0;
	     for(lli l=0;l<=x;l++)
	     {
	         
	         for(lli i=l;i<=m;i++)
	         {
	             for(lli j=l;j<=n;j++)
	             {
	                 
	                if((auxiliary[i-1][j-1]+auxiliary[i-l-1][j-l-1]-auxiliary[i-1][j-l-1]- auxiliary[i-l-1][j-1])/(l*l) >=k){
                        cnt++;
                    }
                 }
             }
	     }

         cout<<cnt-1<<'\n';
    }
    return 0;
}
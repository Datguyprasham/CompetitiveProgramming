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
   ull t;
   cin>>t;
   while(t--)
	{
         ull m,n,k,data,i,j;
         cin>>m>>n>>k;
	    ull  matrix[m][n];
	    ull  auxiliary[m][n];
	     for(i=0;i<m;i++)
	     {
	         for(j=0;j<n;j++)
	           {
	               cin>>matrix[i][j];
	           }
	     }
	     
         
	      for (int i=0; i<n; i++)
      auxiliary[0][i] = matrix[0][i];
  
  
   for (int i=1; i<m; i++)
      for (int j=0; j<n; j++)
         auxiliary[i][j] = matrix[i][j] + auxiliary[i-1][j];
  
  
   for (int i=0; i<m; i++)
      for (int j=1; j<n; j++)
         auxiliary[i][j] += auxiliary[i][j-1];
	     
	     
	 
	    
	     ull x=min(m,n);
	     ull l;
	     ull cnt=0;
	     for(l=x;l>=1;l--)
	     {
	         
	         for(i=0;i+l<=m;i++)
	         {
	             for(j=0;j+l<=n;j++)
	             {
	                 
	                 ull res = auxiliary[i+l-1][j+l-1];
  
   
    if (i > 0)
       res = res - auxiliary[i-1][j+l-1];
  
  
    if (j > 0)
       res = res - auxiliary[i+l-1][j-1];
  

    if (i > 0 && j > 0)
       res = res + auxiliary[i-1][j-1];
  
                     if(double(res)/(l*l)>=k)
                         {   cnt++;
             
                         }
     
	             }
	   
	         }

	     }
	     
	     cout<<cnt<<endl;
	     

     }
    
    
}
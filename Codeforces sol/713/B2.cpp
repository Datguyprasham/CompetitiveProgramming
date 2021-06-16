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
         ull n;cin>>n;
         int r[2],c[2],k=0,l=0,i,j;
	     char a[n][n];
	     for(i=0;i<n;i++)
	     for(j=0;j<n;j++)
	     {
	         cin>>a[i][j];
	         if(a[i][j]=='*')
	         {
	             r[k++]=i;
	             c[l++]=j;
	         }
	     }
	     
	     if(r[0]==r[1])
	     {
	         if(r[0]!=n-1)
	        { a[r[0]+1][c[0]]='*';
	          a[r[0]+1][c[1]]='*';
	        }
	        else
	        {
	             a[r[0]-1][c[0]]='*';
	          a[r[0]-1][c[1]]='*';
	        }
	        
	     }     
	     else if(c[0]==c[1])
	     {
	         if(c[0]!=n-1)
	         {
	             a[r[0]][c[0]+1]='*';
	             a[r[1]][c[0]+1]='*';
	         }
	         else
	         {
	             a[r[0]][c[0]-1]='*';
	             a[r[1]][c[0]-1]='*';
	         }
	             
	        }
	        else
	        {
	            a[r[0]][c[1]]='*';
	            a[r[1]][c[0]]='*';
	        }
	     
	     for(i=0;i<n;i++)
	     {
	         for(j=0;j<n;j++)
	     {
	         cout<<a[i][j];
	        
	     }
	     cout<<endl;
	     }
    
     }
}
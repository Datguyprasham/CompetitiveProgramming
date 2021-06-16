#include "bits/stdc++.h"
using namespace std;

typedef unsigned long long ull;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll,ll> pll;
typedef map<int,int> mii;

#define  ff          first
#define  ss          second
#define  pb          push_back
#define  IOS         ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/* CONSTRAINTS */
#define pi 3.1415
const ll MOD= 1e9+7;
const ll INF = 1e9;
const int MAX_N=1e5+1;

/* CEIL() for int and ll
  q = (x % y) ? x / y + 1 : x / y;
*/

int arr[200001],st[800004];


//segtree array size=4*input array size
//solve query in O(QlogN)
void buildTree(int si,int ss,int se){
	if(ss==se){
		st[si]=arr[ss];
		return ;
	}

	int mid=ss+(se-ss)/2; 

	buildTree(2*si,ss,mid);
	buildTree(2*si+1,mid+1,se);

	//st[si]=min(st[2*si],st[2*si+1]); //this is for range min query
	//for range max query we do max(st[2*si],st[2*si +1]);
	st[si]=st[2*si]+st[2*si +1];

}

//process queries
int query(int si,int ss,int se,int qs,int qe){
	if(qs>se || qe<ss)
		return 0;     //completely outside
	//for range sum query here return 0; 

	if(ss>=qs && se<=qe)
		return st[si];  //completely inside

	int mid=ss+(se-ss)/2;
	// int l=query(2*si,ss,mid,qs,qe);
	// int r=query(2*si +1,mid+1,se,qs,qe);

	//return min(query(2*si,ss,mid,qs,qe),query(2*si +1,mid+1,se,qs,qe)); 
	//for range max query return max(l,r);
	return query(2*si,ss,mid,qs,qe)+query(2*si +1,mid+1,se,qs,qe);
}

//update points
void update(int si,int ss,int se,int idx,int val){
	if(ss==se){
		arr[idx]=val;
		st[si]=val;
		return ;
	}
	int mid=ss+(se-ss)/2;
	if(idx<=mid){
		update(2*si,ss,mid,idx,val);
	}
	else{
		update(2*si+1,mid+1,se,idx,val);
	}
	//st[si]=min(st[2*si],st[2*si +1]); //recalculate with updated point
	//for range max query max(st[2*si],st[2*si +1]);
	st[si]=st[2*si]+st[2*si+1];
}

void solve(){
	int n,q,x,k,u,l,r;cin>>n>>q;
	for(int i=1;i<=n;i++)
		cin>>arr[i];
	buildTree(1,1,n);
	while(q--){
		cin>>x;
		if(x==1){
			cin>>k>>u;
			update(1,1,n,k,u);
		}
		else{
			cin>>l>>r;
			cout<<query(1,1,n,l,r)<<'\n';
		}
	}
}

int main(){
    IOS;
    int tc=1;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
    return 0;
}
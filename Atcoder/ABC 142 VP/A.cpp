// #include <bits/stdc++.h>
// using namespace std;

// typedef unsigned long long ull;
// typedef long long int lli;
// typedef vector<int> vi;
// typedef vector<long long int> vlli;

// #define pb push_back
// #define pi 3.1415

// const lli MOD= 1e9+7;


// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);cout.tie(NULL);
//     int n;cin>>n;
//     int cnt=0;
//     for(int i=1;i<=n;i++){
//         if(i%2)
//             cnt++;
//     }
//     printf("%f",1.0*(cnt/n));
//     return 0;
// }


#include <cstdio>
#include <algorithm>
using namespace std;

int main() {

	int N;
	scanf("%d" ,&N);
	int tmp = 0;
	for(int i = 1; i <= N; i++)
		if(i % 2) tmp++;
	printf("%f", 1.0 * tmp / N);
	return 0;
}


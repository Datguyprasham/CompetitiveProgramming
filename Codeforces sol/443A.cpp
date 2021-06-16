#include <bits/stdc++.h>


using namespace std;

int32_t main(){
    char arr[1002];

    cin.getline(arr,1002);


    set<char>s(arr,arr+(sizeof(arr)/sizeof(arr[0])));

    cout<<(s.size()-2);


}

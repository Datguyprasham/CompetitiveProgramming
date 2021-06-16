#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

int main(){
    int test_cases,n,m,sum=0,num;
    cin>>test_cases;
    vector<int> arr(10);
    string input;

    while(test_cases>0){
        cin>>n>>m;
        getline(cin,input);
        istringstream is(input);
        while(is>>num){arr.push_back(num);}

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                random_shuffle(arr.begin(), arr.end());
                sum+=arr[i]/j;
                if(sum==m){
                    cout<<"YES"<<endl;
                    break;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
        test_cases--;
    }
    return 0;





}

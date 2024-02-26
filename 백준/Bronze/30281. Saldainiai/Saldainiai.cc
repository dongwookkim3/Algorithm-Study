#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main(){
    vector<int> A,B;
    int n;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        if (a%2==0){
            A.push_back(a);
        }
        else {
            B.push_back(a);
        }
    }
    sort(B.begin(),B.end(),greater<int>());
    if ((accumulate(A.begin(),A.end(),0)+accumulate(B.begin(),B.end(),0))%2){
        B.pop_back();
    }
    cout << (accumulate(A.begin(),A.end(),0)+accumulate(B.begin(),B.end(),0))/2;
    return 0;
}
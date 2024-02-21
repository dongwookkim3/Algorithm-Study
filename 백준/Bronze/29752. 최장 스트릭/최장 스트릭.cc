#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> A;
    int n;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        if (a && !A.empty()){
            A.push_back(A.back()+1);
        }
        else if (a){
            A.push_back(1);
        }
        else {
            A.push_back(0);
        }
    }
    cout << *max_element(A.begin(),A.end());
    return 0;
}
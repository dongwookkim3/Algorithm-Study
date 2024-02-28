#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> A;
    int n,a=0,b=0;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        A.push_back(a);
    }
    for (int i=0;i<max_element(A.begin(),A.end())-A.begin();i++){
        a+=A[i];
    }
    for (int i=max_element(A.begin(),A.end())-A.begin()+1;i<A.size();i++){
        b+=A[i];
    }
    cout << a << "\n" << b;
    return 0;
}
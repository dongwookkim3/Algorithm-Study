#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> A,B;
    int n;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        A.push_back(a);
    }
    sort(A.begin(),A.end());
    int m=A.back();
    while(A.size()!=0){
        B.push_back(A.back());
        B.push_back(A.front());
        A.pop_back();
        if (A.size()!=0){
            A.erase(A.begin());
        }
    }
    for (int i=1;i<B.size();i++){
        m+=max(0,B[i]-B[i-1]);
    }
    cout << m;
    return 0;
}
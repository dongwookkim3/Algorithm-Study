#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<string> A;
    string B;
    cin >> B;
    for (int i=1;i<B.length()-1;i++){
        for (int j=i+1;j<B.length();j++){
            string C=B;
            reverse(C.begin(),C.begin()+i);
            reverse(C.begin()+i,C.begin()+j);
            reverse(C.begin()+j,C.end());
            A.push_back(C);
        }
    }
    sort(A.begin(),A.end());
    cout << A.front();
    return 0;
}
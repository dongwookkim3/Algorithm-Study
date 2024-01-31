#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    for (int t=1;t<=3;t++){
        string n;
        vector<int> A={1};
        cin >> n;
        for (int i=1;i<n.length();i++){
            if (n[i]==n[i-1]){
                A.push_back(A.back()+1);
            }
            else {
                A.push_back(1);
            }
        }
        sort(A.begin(),A.end(),greater<int>());
        cout << A[0] << "\n";
    }
    return 0;
}
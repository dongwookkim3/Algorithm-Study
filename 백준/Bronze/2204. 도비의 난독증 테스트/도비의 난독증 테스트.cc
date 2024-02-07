#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(string &a,string &b){
    string A=a,B=b;
    for (int i=0;i<A.length();i++){
        if (A[i]>90){
            A[i]-=32;
        }
    }
    for (int i=0;i<B.length();i++){
        if (B[i]>90){
            B[i]-=32;
        }
    }
    return (A<B);
}
int main(){
    int t;
    while(cin >> t && t!=0){
        vector<string> A;
        while(t--){
            string a;
            cin >> a;
            A.push_back(a);
        }
        sort(A.begin(),A.end(),compare);
        cout << A.front() << "\n";
    }
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<string> A,B;
    int n;
    cin >> n;
    while(n--){
        string a,b;
        cin >> a >> b;
        A.push_back(a);
        B.push_back(b);
    }
    string S;
    cin >> S;
    for (int i=0;i<S.length();i+=4){
        for (int j=0;j<B.size();j++){
            if (S.substr(i,4)==B[j]){
                cout << A[j];
                break;
            }
            else if (j==B.size()-1){
                cout << '?';
            }
        }
    }
    return 0;
}
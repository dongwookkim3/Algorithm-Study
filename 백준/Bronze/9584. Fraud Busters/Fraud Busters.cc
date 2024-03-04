#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<string> A;
    string a;
    int n;
    cin >> a >> n;
    while(n--){
        string B;
        cin >> B;
        for (int i=0;i<a.length();i++){
            if (a[i]!=B[i] && a[i]!='*') break;
            else if (i==a.length()-1){
                A.push_back(B);
            }
        }
    }
    cout << A.size() << "\n";
    for (int i=0;i<A.size();i++){
        cout << A[i] << "\n";
    }
    return 0;
}
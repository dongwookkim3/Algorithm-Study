#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        cout << "Denominations: ";
        vector<int> A;
        int n;
        cin >> n;
        if (n==1){
            int a;
            cin >> a;
            cout << a << "\nGood coin denominations!\n\n";
            continue;
        }
        while(n--){
            int a;
            cin >> a;
            cout << a << ' ';
            A.push_back(a);
        }
        for (int i=1;i<A.size();i++){
            if (A[i]<A[i-1]*2){
                cout << "\nBad coin denominations!\n\n";
                break;
            }
            else if (i==A.size()-1){
                cout << "\nGood coin denominations!\n\n";
            }
        }
    }
    return 0;
}
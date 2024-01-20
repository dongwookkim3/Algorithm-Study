#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0;; i++) {
            if (n == 6174) {
                cout << i << "\n";
                break;
            }
            string A = to_string(n), B = to_string(n);
            while(A.length()<4){
                A+='0';
                B+='0';
            }
            sort(A.begin(), A.end(), greater<int>());
            sort(B.begin(), B.end());
            n = stoi(A) - stoi(B);
        }
    }
    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int m = 0;
    vector<int> B;
    string A;
    cin >> A;
    for (int i = 0; i < A.length(); i++) {
        if (A[i] == '(' && A[i + 1] == '(') {
            B.push_back(1);
        } else if (A[i] == ')' && A[i + 1] == ')') {
            B.push_back(0);
        }
    }
    for (int i = 0; i < B.size(); i++) {
        if (B[i] != 0) {
            for (int j = i - 1; j >= 0; j--) {
                if (B[j] != 0) {
                    B[i] = B[j] + 1;
                    break;
                }
            }
        }
    }
    for (int i = 0; i < B.size(); i++) {
        if (B[i] == 0) {
            for (int j = i - 1; j >= 0; j--) {
                if (B[j] != 0) {
                    m += B[j];
                    break;
                }
            }
        }
    }
    cout << m;
    return 0;
}

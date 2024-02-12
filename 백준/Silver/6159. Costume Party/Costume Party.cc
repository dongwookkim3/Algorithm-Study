#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int n, k, m = 0;
    vector<int> A;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        A.push_back(a);
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (A[i] + A[j] <= k) {
                m++;
            }
        }
    }
    cout << m;
    return 0;
}

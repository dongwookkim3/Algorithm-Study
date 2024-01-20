#include <iostream>
#include <vector>

#define MAX 4000000
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> P;
    bool Prime[MAX + 1] = {};
    for (long long i = 2; i * i <= MAX; i++) {
        if (Prime[i] == 0) {
            for (long long j = i * i; j <= MAX; j += i) {
                Prime[j] = true;
            }
        }
    }
    for (int i = 2; i <= MAX; i++) {
        if (Prime[i] == 0) {
            P.push_back(P.empty() ? i : P.back() + i);
        }
    }
    int n, m = 0;
    cin >> n;
    for (int i = 0; i < P.size() && P[i] <= n; i++) {
        if (P[i] == n) {
            m++;
        }
    }
    for (int i = 0; i < P.size(); i++) {
        for (int j = i + 1; j < P.size() && P[j] - P[i] <= n; j++) {
            if (P[j] - P[i] == n) {
                m++;
            }
        }
    }
    cout << m;
    return 0;
}
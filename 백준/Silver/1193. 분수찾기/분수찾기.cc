#include <iostream>

#define MAX 4472
#define XMAX 10000000
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x = 1, y = 1, d = 0;
    int dx[2] = {-1, 1};
    int dy[2] = {1, -1};
    int A[MAX + 1][MAX + 1] = {};
    for (int i = 1; i <= XMAX; i++) {
        A[x][y] = i;
        if (x + dx[d % 2] != 0 && y + dy[d % 2] != 0) {
            x += dx[d % 2];
            y += dy[d % 2];
        } else {
            if (d % 2 == 0) {
                y++;
            } else {
                x++;
            }
            d++;
        }
    }
    int n;
    cin >> n;
    for (int i = 1; i <= MAX; i++) {
        for (int j = 1; j <= MAX; j++) {
            if (A[i][j] == n) {
                cout << i << '/' << j;
                return 0;
            } else if (A[i][j] > n) {
                break;
            }
        }
    }
}
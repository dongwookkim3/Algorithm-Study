#include <stdio.h>
#include <limits.h>
int main() {
    int n, m, b;
    int map[500][500];
    int leastTime = INT_MAX;
    int mostHeight = 0;
    scanf("%d %d %d", &n, &m, &b);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &map[i][j]);
        }
    }
    for (int h = 0; h <= 256; h++) {
        int build = 0;
        int remove = 0;
        int inventory = b;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int height = map[i][j] - h;

                if (height > 0) {
                    remove += height;
                } else {
                    build -= height;
                }
            }
        }
        int totalBlocks = remove + inventory;
        if (totalBlocks >= build) {
            int time = remove * 2 + build;
            if (leastTime >= time) {
                leastTime = time;
                mostHeight = h;
            }
        }
    }
    printf("%d %d\n", leastTime, mostHeight);
    return 0;
}
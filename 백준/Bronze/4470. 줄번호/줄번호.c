#include <stdio.h>
#include <string.h>
int main() {
	int n;
	char str[1000];
	char arr[1000];
	int i;
	scanf("%d", &n);
	fgets(arr, sizeof(arr), stdin);
	for (i = 1; i <= n; i++) {
		fgets(str, sizeof(str), stdin);
		printf("%d. ", i);
		printf("%s", str);
	}
	return 0;
}
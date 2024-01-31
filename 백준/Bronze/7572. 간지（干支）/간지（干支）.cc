#include <stdio.h>
int main(){
	int year;
	int A[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	char B[12] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L' };
	scanf("%d", &year);
	printf("%c%d", B[(year + 8) % 12], A[(year + 6) % 10]);
	return 0;
}

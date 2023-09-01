#include <stdio.h>
#include<math.h>
int main()
{
	int n, sum = 0, arr[5] = { 0 };
	for (int i = 0; i < 5; i++)
    {
		scanf("%1d", &arr[i]);
		sum += pow(arr[i], 5);
	}
	printf("%d", sum);
}
 
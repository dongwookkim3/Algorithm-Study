#include <stdio.h>
#include <string.h>

int is_same(char str1[], char str2[])
{
	if (strlen(str1) != strlen(str2))
		return 0;

	for (int i = 0; i < strlen(str1); i++)
		if (str1[i] != str2[i])
			return 0;

	return 1;
}


int main(void)
{
	char num1[105], num2[105], oper;

	scanf("%s %c %s", num1, &oper, num2);

	if (oper == '+')
	{
		if (is_same(num1, num2))
		{
			printf("2");
			for (int i = 0; i < strlen(num1) - 1; i++)
				printf("0");
			return 0;
		}

		if (strlen(num1) > strlen(num2))
		{
			num1[strlen(num1) - strlen(num2)] = '1';
			printf("%s", num1);
		}
		else
		{
			num2[strlen(num2) - strlen(num1)] = '1';
			printf("%s", num2);
		}
	}
	else
	{
		printf("1");
		for (int i = 0; i < strlen(num1) + strlen(num2) - 2; i++)
			printf("0");
	}

	return 0;
}
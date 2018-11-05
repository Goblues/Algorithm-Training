#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < i; j++)
			printf(" ");

		for (int l = 0; l < (2 * n - 1) - (2 * i); l++)
			printf("*");

		//for (int k = 0; k < i; k++)
			//printf("-");

		printf("\n");
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
			printf(" ");

		for (int l = 0; l < (2 * i) + 1; l++)
			printf("*");

		//for (int k = 0; k < n - i - 1; k++)
			//printf("-");

		printf("\n");
	}
	
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
char str[101][101];
int num[101][101];
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	for (int i = 0; i < a; i++)
		scanf("%s", &str[i]);
	for (int i = 0; i < a; i++)
		for (int j = 0; j < b; j++)
		{
			num[i][j] = -1;
			if (str[i][j] == 'c')
				num[i][j]++;
		}
	for (int i = 0; i < a; i++)
		for (int j = 0; j < b; j++)
			if (num[i][j] >= 0)
			{
				if (num[i][j+1] == 0)
					continue;
				num[i][j+1] = num[i][j] + 1;
			}
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
			printf("%d ", num[i][j]);
		printf("\n");
	}
	return 0;
}
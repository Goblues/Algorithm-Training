#include <bits/stdc++.h>
using namespace std;
int check[101][101];
int main()
{
	int n;
	int a, b;
	int cnt = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);
		for (int j = a; j < a+10; j++)
			for (int k = b; k < b+10; k++)
			{
				check[j][k] = 1;
			}
	}
	for (int i = 0; i < 100; i++)
		for (int j = 0; j < 100; j++)
			if (check[i][j] == 1)
				cnt++;
	printf("%d", cnt);
	return 0;
}
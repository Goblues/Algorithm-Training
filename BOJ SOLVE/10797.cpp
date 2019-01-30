#include <bits/stdc++.h>
using namespace std;
bool check[100][100];
int main()
{
	int n;
	int a, b;
	int cnt = 0;
	scanf("%d", &n);
	for (int i = 0; i < 3; i++)
	{
		scanf("%d %d", &a, &b);
		for (int j = a; j < a+10; j++)
		{
			for (int k = b; k < b+10; k++)
			{
				check[j][k] = true;
			}
		}
	}
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; i++)
		{
			cnt += check[i][j];
		}
	}
	printf("%d", cnt);
	return 0;
}
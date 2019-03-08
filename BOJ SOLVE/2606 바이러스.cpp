#include <bits/stdc++.h>

using namespace std;
int v[111][111];
int cnt = 0;
int main()
{
	int n;
	scanf("%d", &n);
	int m;
	scanf("%d", &m);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			v[i][j] = 987654321;
			if (i == j)
			{
				v[i][j] = 0;
			}
		}
	}
	for (int i = 0; i < m; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		v[a][b] = 1;
		v[b][a] = 1;
	}

	for (int k = 1; k <= n; ++k)
	{
		for (int i = 1; i <= n; ++i)
		{
			for (int j = 1; j <= n; ++j)
			{
				if (v[i][j] > v[i][k] + v[k][j])
				{
					v[i][j] = v[i][k] + v[k][j];
				}
			}
		}
	}

	for (int i = 1; i <= n; i++)
	{
		if (v[i][1] < 987654321)
		{
			cnt++;
		}
	}
	printf("%d", cnt-1);
	return 0;
}
#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};
bool visit[26][26];
int num[26][26];
int a[626];
int n;
int danji;

int dfs(int x, int y)
{
	int res = 1;
	for (int i = 0; i < 4; i++)
	{
		int nx = x+dx[i];
		int ny = y+dy[i];
		if (nx < 0 || ny < 0 || nx >= n || ny >= n || visit[ny][nx] || num[ny][nx] != 1)
			continue;
		visit[ny][nx] = true;
		res += dfs(nx, ny);
	}
	return res;
}

int main()
{
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf("%1d", &num[i][j]);	

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (num[i][j] == 1 && visit[i][j] == false)
			{
				visit[i][j] = true;
				a[danji++] = dfs(j, i);
			}
		}
	}

	sort(a, a+danji);
	printf("%d\n", danji);
	for(int i = 0; i < danji; i++)
		printf("%d\n", a[i]);

	return 0;
}
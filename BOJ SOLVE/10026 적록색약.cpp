#include <bits/stdc++.h>

using namespace std;
const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};
char a[101][101];
bool visit[101][101];

int Rdfs(int x, int y)
{
	int res = 1;
	for (int i = 0; i < 4; i++)
	{
		int nx = x+dx[i];
		int ny = y+dy[i];
		if (nx < 0 || ny < 0 || nx >= n || ny >= n || visit[ny][nx] || a[ny][nx] != 'R')
			continue;
		visit[ny][nx] = true;
		res += dfs(nx, ny);
	}
	return res;
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%s", &a[j][i]);
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == 'R' && visit[i][j] == false)
			{
				visit[i][j] = true;
				a[danji++] = dfs(j, i);
			}
		}
	}


	return 0;
}
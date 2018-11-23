#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};
queue<pair<int, int>> bfs;
bool visit[101][101];
int a[101][101];

int main()
{
	int n, m;
	int kan;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%1d", &a[i][j]);
		}
	}

    bfs.push({0, 0});
	visit[0][0] = true;
	int cnt = 1;
	while (!bfs.empty())
	{
		int size = bfs.size();
		while (size--)
		{
			int x = bfs.front().first;
			int y = bfs.front().second;
			bfs.pop();
			for (int i = 0; i < 4; i++)
			{
				int nx = x + dx[i];
				int ny = y + dy[i];
				if (nx < 0 || ny < 0 || nx >= m || ny >= n || visit[ny][nx] || a[ny][nx] != 1)
					continue;
				if (nx == m - 1 && ny == n - 1)
				{
					printf("%d", cnt+1);
					return 0;
				}
				bfs.push({nx, ny});
				visit[ny][nx] = true;
			}
		}
		cnt++;
	}
	return 0;
}
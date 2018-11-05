#include <bits/stdc++.h>

using namespace std;

int main()
{
	queue<int> q;
	char str[10];
	int n;

	scanf(" %d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf(" %s", str);

		if (strcmp(str, "push") == 0)
		{
			int x;
			scanf("%d ", &x);
			q.push(x);
		}
		else if (strcmp(str, "pop") == 0)
		{	
			if (q.empty())
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n", q.front());
				q.pop();
			}
		}
		else if (strcmp(str, "size") == 0)
		{
			printf("%d\n", q.size());
		}
		else if (strcmp(str, "empty") == 0)
		{
			if (q.empty())
			{
				printf("1\n");
			}
			else
			{
				printf("0\n");
			}
		}
		else if (strcmp(str, "front") == 0)
		{
			if (q.empty())
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n", q.front());
			}
		}
		else if (strcmp(str, "back") == 0)
		{
			if (q.empty())
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n", q.back());
			}
		}
	}

	return 0;
}
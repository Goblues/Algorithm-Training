#include <bits/stdc++.h>

using namespace std;

int main()
{
	stack<int> s;
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
			s.push(x);
		}
		else if (strcmp(str, "pop") == 0)
		{	
			if (s.empty())
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n", s.top());
				s.pop();
			}						
		}
		else if (strcmp(str, "size") == 0)
		{
			printf("%d\n", s.size());
		}
		else if (strcmp(str, "empty") == 0)
		{
			if (s.empty())
			{
				printf("1\n");
			}
			else
			{
				printf("0\n");
			}
		}
		else if (strcmp(str, "top") == 0)
		{
			if (s.empty())
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n", s.top());
			}
		}
	}

	return 0;
}
#include <bits/stdc++.h>

using namespace std;
int a[101];

int main()
{
	int n, x, y;
	int pt = 0;
	scanf("%d %d %d", &n, &x, &y);
	for (int i = 0; i < n; i++)
	{
		scanf("%d ", &a[i]);
	}
	while(1)
	{
		if (pt%2 == 0)
		{
			for (int i = 0; i < n; i++)
			{
				if (a[i] <= x)
				{
					a[i] = max(0, a[i]-x);
					break;
				}
				else
				{
					a[i] = max(0, a[i]-x);
					break;
				}
			}
		}
		else
		{
			for (int i = 0; i < n; i++)
			{
				if (a[i] <= x && a[i] != 0)
				{
					a[i] = a[i] + y;
					break;
				}
				else if (a[i] > x && a[i] != 0)
				{
					a[i] = a[i] + y;
					break;
				}
			}
		}

		pt++;

		for (int i = 0; i < n; i++)
		{
			if (a[i] == 0)
			{
				cnt++;
			}
		}

		if (cnt > n)
		{
			printf("%d", n);
			break;
		}
		else
		{
			
		}

	}


	return 0;
}
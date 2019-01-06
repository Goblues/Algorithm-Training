#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[9];
int res[9];

void f(int pos)
{
	if (pos == m)
	{
		for (int i = m-1; i >= 0; i--)
		{
			if (res[i] < res[i-1])
			{
				return;
			}
		}
		for (int i = 0; i < m; i++)
		{
			printf("%d ", res[i]);
		}
		printf("\n");
		return;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			res[pos] = a[i];
			f(pos+1);
		}
	}
}

int main() {
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		a[i] = i + 1;
	}
	f(0);
	return 0;
}
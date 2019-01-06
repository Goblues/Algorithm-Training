#include <bits/stdc++.h>

using namespace std;
int n;
int cnt = 0;
int sum = 0;
int a[30];
bool check[30];
int res[30];
void f(int pos)
{
	if (pos == n)
	{
		for (int i = 0; i < n; i++)
		{
			sum = sum + res[i];
		}

		if (sum == 0)
		{
			cnt++;
			return;
		}
		else if (sum == 360)
		{
			cnt++;
			return;
		}
	}

	for (int i = pos; i < n; i++)
	{
		if (!check[i])
		{
			check[i] = true;
			res[pos] = a[i];
			f(pos + 1);
			check[i] = false;
			sum = 0;
		}
	}
}

int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		a[i+n] = -a[i];
		check[i] = false;
	}

	f(0);

	if (cnt == 0)
	{
		printf("NO");
	}
	else
	{
		printf("YES");
	}
	
	return 0;
}
#include <bits/stdc++.h>

using namespace std;
int p, num, cnt;
int a[1001];
int c[201];
int res[201];

void f(int pos)
{
	if (pos == 5)
	{
		if (res[2] > res[3] || res[3] > res[5] || res[2] > res[5])
		{
			return;
		}
		if (res[2] == 0 || res[3] == 0 || res[5] == 0)
		{
			return;
		}

		if (res[2]+res[3]+res[5] != num)
		{
			return;
		}
		else
		{
			cnt++;
			if (cnt == 1)
			{
				for (int i = 0; i < 3; i++)
				{
					printf("%d ", res[i]);
				}
				printf("\n");
			}
			else if (cnt == 0)
			{
				printf("0");
			}
			return;
		}
	}
	else
	{
		for (int i = 0; i < num; i++)
		{
			res[pos] = a[i];
			f((2*pos-1));
		}
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		for (int i = 2; i <= num; i++)
		{
			a[i] = i;
		}
		for (int i = 2; i <= num; i++)
		{
			if (a[i] == 0)
				continue;
			for (int j = i+i; j <= num; j+=i)
			{
				a[j] = 0;
			}
		}
		f(2);
		cnt = 0;
	}
	return 0;
}
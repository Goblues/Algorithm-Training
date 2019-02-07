#include <bits/stdc++.h>
using namespace std;
int a[201];
int b[201];
int c[201];
bool aa[201];
bool bb[201];
bool cc[201];
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d %d %d", &a[i], &b[i], &c[i]);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			if (i == j)
				continue;
			else
			{
				if (a[i] == a[j])
				{
					aa[i] = 1;
					aa[j] = 1;
				}
			}
		}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			if (i == j)
				continue;
			else
			{
				if (b[i] == b[j])
				{
					bb[i] = 1;
					bb[j] = 1;
				}
			}
		}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			if (i == j)
				continue;
			else
			{
				if (c[i] == c[j])
				{
					cc[i] = 1;
					cc[j] = 1;
				}				
			}
		}
	for (int i = 0; i < n; i++)
	{
		if (aa[i] == 1)
		{
			a[i] = 0;
		}
		if (bb[i] == 1)
		{
			b[i] = 0;
		}
		if (cc[i] == 1)
		{
			c[i] = 0;
		}
	}
	for (int i = 0; i < n; i++)
		printf("%d\n", a[i]+b[i]+c[i]);
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
int a[8001];
int b[8001];
int c[8001];
int main()
{
	for (int i = 1; i <= 8000; i++)
	{
		if (a[i] <= 15)
		{
			a[i] = a[i-1] + 1;
			if (a[i] >= 16)
				a[i] = 1;
		}
		if (b[i] <= 28)
		{
			b[i] = b[i-1] + 1;
			if (b[i] >= 29)
				b[i] = 1;
		}
		if (c[i] <= 19)
		{
			c[i] = c[i-1] + 1;
			if (c[i] >= 20)
				c[i] = 1;
		}
	}
	int aa, bb, cc;
	scanf("%d %d %d", &aa, &bb, &cc);
	for (int i = 1; i <= 8000; i++)
		if (aa == a[i] && bb == b[i] && cc == c[i])
		{
			printf("%d", i);
			break;
		}
	return 0;
}
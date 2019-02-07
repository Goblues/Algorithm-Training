#include <bits/stdc++.h>
using namespace std;
long long a[4];
int main()
{
	int n;
	long long b;
	scanf("%d", &n);
	if (n == 2)
	{
		scanf("%lld %lld", &a[0], &a[1]);
		sort(a, a+1);
		for (long long i = 1; i <= a[0]; i++)
		{
			if ((a[0] % i == 0) && (a[1] % i == 0))
			{
				printf("%lld\n", i);
			}
		}
	}
	else if (n == 3)
	{
		scanf("%lld %lld %lld", &a[0], &a[1], &a[2]);
		sort(a, a+2);
		for (long long i = 1; i <= a[0]; i++)
		{
			if ((a[0] % i == 0) && (a[1] % i == 0) && (a[2] % i == 0))
			{
				printf("%lld\n", i);
			}
		}
	}
	return 0;
}
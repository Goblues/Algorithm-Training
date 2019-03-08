#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, max, min, gcd;
	scanf("%d %d", &a, &b);
	if (a >= b)
	{
		max = a;
		min = b;
	}
	else
	{
		max = b;
		min = a;
	}
	for (int i = min; i >= 1; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			gcd = i;
			break;
		}
	}
	printf("%d", b-gcd);
	return 0;
}
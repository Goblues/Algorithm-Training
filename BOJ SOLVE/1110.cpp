#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, a, b, c, cnt = 0;
	scanf("%d", &n);
	m = n;
	do
	{
		a = n / 10;
		if (n < 10)
			a = 0;
		b = n % 10;
		c = a + b;
		if (c > 9)
			c = c % 10;
		n = (b*10) + c;
		cnt++;
	} while (m != n);

	printf("%d", cnt);

	return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	long long sum = 0;
	long long a, b;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &a);
		b = a%10;
		a = a/10;
		a = (int)pow(a, b);
		sum += a;
	}
	printf("%lld", sum);
	return 0;
}
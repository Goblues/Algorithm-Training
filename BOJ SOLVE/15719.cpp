#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, a;
	int sum = 0;
	int sum1 = 0;
	int sum3;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		sum1 += i;
	for (int i = 0; i < n; i++)
	{
		scanf("%d ", &a);
		sum += a;
	}
	sum3 = sum1 - sum;
	printf("%d", n-sum3);
	return 0;
}
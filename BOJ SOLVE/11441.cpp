#include <bits/stdc++.h>
using namespace std;
int num[100001];
int main()
{
	int n, m;
	int a, b;
	int sum = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d ", &num[i]);
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &a, &b);
		for (int j = a; j <= b; j++)
			sum += num[j];
		printf("%d\n", sum);
		sum = 0;
	}
	return 0;
}
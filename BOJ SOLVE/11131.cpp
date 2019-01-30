#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, a;
	int sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &m);
		for (int j = 0; j < m; j++)
		{
			scanf("%d ", &a);
			sum += a;
		}
		if (sum > 0)
		{
			printf("Right\n");
			sum = 0;
		}
		else if (sum == 0)
		{
			printf("Equilibrium\n");
			sum = 0;
		}
		else
		{
			printf("Left\n");
			sum = 0;
		}
	}
	return 0;
}
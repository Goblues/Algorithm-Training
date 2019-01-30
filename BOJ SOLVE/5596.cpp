#include <bits/stdc++.h>
using namespace std;
int main()
{
	int sum = 0;
	int sum2 = 0;
	int a;
	for (int i = 0; i < 4; i++)
	{
		scanf("%d ", &a);
		sum += a;
	}
	for (int i = 0; i < 4; i++)
	{
		scanf("%d ", &a);
		sum2 += a;
	}
	if (sum >= sum2)
	{
		printf("%d", sum);
	}
	else if (sum < sum2)
	{
		printf("%d", sum2);
	}
	return 0;
}
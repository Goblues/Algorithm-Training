#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b;
	int cnt = 1;
	int cnt1 = 1;
	long long c, d, e, f;
	scanf("%d %d", &a, &b);
	for (int i = 0; i < a; i++)
	{
		scanf("%lld %lld", &c, &d);
		if (c != d)
		{
			cnt = -1;
			break;
		}
	}
	if (b > 0)
	{
		for (int i = 0; i < b; i++)
		{
			scanf("%lld %lld", &e, &f);
			if (e != f)
			{
				cnt1 = -1;
				break;
			}
		}
	}
	if (cnt == 1)
	{
		if (cnt1 == -1)
		{
			printf("Why Wrong!!!");
		}
		else
		{
			printf("Accepted");
		}
	}
	else if (cnt == -1)
	{
		printf("Wrong Answer");
	}
	return 0;
}
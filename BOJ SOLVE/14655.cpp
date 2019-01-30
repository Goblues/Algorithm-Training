#include <bits/stdc++.h>
using namespace std;
int a[10001];
int b[10001];
int main()
{
	int n;
	int cnt1 = 0;
	int cnt2 = 0;
	int sum1 = 0;
	int sum2 = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d ", &a[i]);	
	for (int i = 0; i < n; i++)
		scanf("%d ", &b[i]);
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			a[i] = a[i] * (-1);
			cnt1++;
		}
		if (cnt1 > 3)
			break;
	}
	for (int i = 0; i < n; i++)
	{
		if (b[i] > 0)
		{
			b[i] = b[i] * (-1);
			cnt2++;
		}
		if (cnt2 > 3)
			break;
	}
	for (int i = 0; i < n; i++)
		sum1 = sum1 + a[i];
	for (int i = 0; i < n; i++)
		sum2 = sum2 + b[i];
	printf("%d", sum1-sum2);
	return 0;
}
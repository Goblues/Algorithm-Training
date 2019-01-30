#include <bits/stdc++.h>
using namespace std;
int a[101];
int main()
{
	int n, sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		if (a[i-1] > 0 && a[i] > 0)
		{
			a[i] = a[i] + a[i-1];
		}
		sum += a[i];
	}
	printf("%d", sum);	
	return 0;
}
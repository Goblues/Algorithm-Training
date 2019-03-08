#include <bits/stdc++.h>
using namespace std;
int a[10001];
int main()
{
	int n, sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d ", &a[i]);
		sum += abs(a[i]);
	}
	printf("%d", 2*sum);
	return 0;
}
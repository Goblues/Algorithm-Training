#include <bits/stdc++.h>
using namespace std;
int a[10];
int main()
{
	int n;
	int k;
	scanf("%d %d", &n, &k);
	for (int i = 0; i < k; i++)
	{
		scanf("%d ", &a[i]);
		if (a[i] == 3 || a[i] == 4)
			n = n-2;
		else if (a[i] == 5 || a[i] == 6)
			n = n-3;
		else if (a[i] == 7 || a[i] == 8)
			n = n-4;
	}
	if (n <= 0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}
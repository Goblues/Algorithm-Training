#include <bits/stdc++.h>
using namespace std;
int a[1001];
int main()
{
	int n, m, cnt;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &m);
		cnt = 0;
		for (int j = 0; j < m; j++)
			scanf("%d ", &a[j]);
		for (int k = m-1; k >= 0; k--)
			for (int j = k-1; j >= 0; j--)
			{
				if (a[k] <= a[j])
				{
					cnt++;
					break;
				}			
			}
		printf("Case #%d: %d\n", i+1, cnt);
	}
	return 0;
}
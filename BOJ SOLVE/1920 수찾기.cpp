#include <bits/stdc++.h>
using namespace std;
int a[100001];
int b[100001];
int bs(int l, int r, int num)
{
	while (l <= r)
	{
		int mid = (l + r) / 2;
		if (a[mid] < num) l = mid + 1;
		else if (a[mid] > num) r = mid - 1;
		else return mid;
	}
	return -1;
}
int main() {
	int fnum;
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf(" %d ", &a[i]);
	int m;
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
		scanf(" %d", &b[i]);
	sort(a, a + n);
	for (int i = 0; i < m; i++)
	{
		fnum = bs(0, n, b[i]);
		if (fnum == -1)
		{
			printf("0\n");
		}
		else
		{
			printf("1\n");
		}
	}
	return 0;
}
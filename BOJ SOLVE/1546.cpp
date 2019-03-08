#include <bits/stdc++.h>
using namespace std;
double a[1001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a+n, greater<int>());
	double cnt;
	for (int i = 1; i < n; i++)
	{
		cnt = (double)a[i] / a[0];
		a[i] = (double)cnt * 100.0;
	}
	a[0] = 100;
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
	}
	printf("%lf", sum/n);	
	return 0;
}
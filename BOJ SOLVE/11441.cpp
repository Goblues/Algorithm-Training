#include <bits/stdc++.h>
using namespace std;
int num[100001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, a, b, sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a;
		sum += a;
		num[i] = sum; 
	}
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		cout << num[b]-num[a-1] << '\n';
	}
	return 0;
}
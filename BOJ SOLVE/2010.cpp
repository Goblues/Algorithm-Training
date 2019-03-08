#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, a, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		sum += a;
	}
	cout << sum-(n-1);
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, fac = 1;
	cin >> n;
	for (int i = n; i >= 1; i--)
	{
		fac = fac * i;
	}
	cout << fac;
	return 0;
}
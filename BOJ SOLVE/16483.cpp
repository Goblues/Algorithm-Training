#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, a, ans, idxa, idxb;
	int b = 1;
	cin >> t;
	while (1)
	{
		a = t + b;
		ans = a*a - b*b;
		if (ans <= 72)
		{
			idxa = a;
			idxb = b;
			break;
		}
		b++;
	}
	cout << idxa << ' ' << idxb;
	return 0;
}
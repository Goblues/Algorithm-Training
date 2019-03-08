#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	char a[11];
	int b, c;
	while (1)
	{
		cin >> a >> b >> c;
		if (a[0] == '#')
			break;
		if (b > 17 || c >= 80)
		{
			cout << a << " Senior" << '\n';
		}
		else
		{
			cout << a << " Junior" << '\n';
		}	
	}
	
	return 0;
}
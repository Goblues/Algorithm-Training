#include <bits/stdc++.h>
using namespace std;
char e[20];
int f[20];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b, c;
	long long d;
	cin >> a >> b >> c;
	d = a * b * c;
	sprintf(e, "%lld", d);
	for (int i = 0; i < strlen(e); i++)
	{
		int l;
		l = e[i]- '0';
		f[l]++;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << f[i] << '\n';
	}
	return 0;
}
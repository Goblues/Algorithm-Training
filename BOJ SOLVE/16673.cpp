#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b, c, sum = 0;
	int year;
	cin >> a >> b >> c;
	for (int i = 1; i <= a; i++)
	{
		year = b*i+c*i*i;
		sum += year; 
	}
	cout << sum;
	return 0;
}
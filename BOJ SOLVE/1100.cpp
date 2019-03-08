#include <bits/stdc++.h>
using namespace std;
char a[9];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int cnt = 0;
	for (int i = 0; i < 8; i++)
	{
		cin >> a;
		if (i % 2 == 0)
		{
			for (int j = 0 ; j < 8; j++)
				if (j % 2 == 0)
					if (a[j] == 'F')
						cnt++;
		}
		else
		{
			for (int j = 0; j < 8; j++)
				if (j % 2 != 0)
					if (a[j] == 'F')
						cnt++;
		}
	}
	cout << cnt;	
	return 0;
}
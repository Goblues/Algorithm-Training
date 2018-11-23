#include <bits/stdc++.h>

using namespace std;
int num[1000000];
int num4;
int main()
{
	int i = 0;
	while(scanf("%d", &num[i]))
	{
		if (num[i] == 0)
			break;
		num[i] = 3 * num[i];
		if ((num[i] % 2) == 0)
		{
			num[i] = num[i] / 2;
			num[i] = 3 * num[i];
			num[i] = num[i] / 9;
			num4 = num[i];
			num[i] = 2 * num[i];
			cout << i+1 << ". " << "even " << num4 << endl;
		}
		else
		{
			num[i] = (num[i] + 1) / 2;
			num[i] = 3 * num[i];
			num[i] = num[i] / 9;
			num4 = num[i];
			num[i] = (2 * num[i]) + 1;
			cout << i+1 << ". " << "odd " << num4 << endl;
		}
		i++;
	}

	return 0;
}
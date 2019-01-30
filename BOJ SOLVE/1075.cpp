#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long m, f;
	int n = 0;
	scanf("%ld", &m);
	scanf("%ld", &f);
	while (m % 100 != 0)
	{
		m--;
	}
	while (n < 100)
	{
		if ((m+n) % f == 0)
		{
			if (n < 10)
			{
				printf("0");
			}
			printf("%d", n);
			break;
		}
		n++;
	}	
	return 0;
}
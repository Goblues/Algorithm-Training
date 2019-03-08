#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long a, d, n, s, p;
	long long num1, num2;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%lld %lld %lld %lld", &d, &n, &s, &p);
		num1 = n * s;
		num2 = d + n * p;
			if (num1 == num2)
				printf("does not matter\n");
			else if (num1 > num2)
				printf("parallelize\n");
			else
				printf("do not parallelize\n");
	}	
	return 0;
}
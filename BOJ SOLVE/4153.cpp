#include <bits/stdc++.h>
using namespace std;
int a[3];
int main()
{	
	while (1)
	{
		scanf("%d %d %d", &a[0], &a[1], &a[2]);
		if (a[0] == 0 || a[1] == 0 || a[2] == 0)
			break;
		sort(a, a+3);
		if (pow(a[2], 2) == pow(a[0], 2) + pow(a[1], 2))
			printf("right\n");
		else
			printf("wrong\n");
	}
	return 0;
}
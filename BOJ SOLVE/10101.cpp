#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[3];
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &a[i]);
		sum += a[i];
	}

	if (sum == 180)
	{
		if (a[0] == a[1] && a[1] == a[2] && a[0] == a[2])
			printf("Equilateral");
		else if (a[0] == a[1] || a[1] == a[2] || a[0] == a[2])
			printf("Isosceles");
		else
			printf("Scalene");
	}
	else if (sum != 180)
		printf("Error");
	return 0;
}
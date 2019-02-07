#include <bits/stdc++.h>
using namespace std;
int a[6];
int main()
{
	for (int i = 0; i < 5; i++)
		scanf("%d", &a[i]);
	int A;
	int B;
	A = a[0]*a[4];
	if (a[4] > a[2])
	{
		B = a[1]+(a[4]-a[2])*a[3];
	}
	else
	{
		B = a[1];
	}
	if (A > B)
	{
		printf("%d", B);
	}
	else if (B > A)
	{
		printf("%d", A);
	}

	return 0;
}
#include <bits/stdc++.h>
using namespace std;
int num[10];
int main()
{
	double a, b, c;
	scanf("%d %d", &num[0], &num[1]);
	scanf("%d %d", &num[2], &num[3]);
	scanf("%d %d", &num[4], &num[5]);
	a = (double)num[0]/num[1];
	b = (double)num[2]/num[3];
	c = (double)num[4]/num[5];
	if (a == b && b == c && c == a)
	{
		printf("WHERE IS MY CHICKEN?");
	}
	else
	{
		printf("WINNER WINNER CHICKEN DINNER!");
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
int num[10];
int main()
{
	scanf("%d %d", &num[0], &num[1]);
	scanf("%d %d", &num[2], &num[3]);
	scanf("%d %d", &num[4], &num[5]);
	double first, second;
	first = (double)(num[3]-num[1])/(num[2]-num[0]);
	second = (double)(num[5]-num[3])/(num[4]-num[2]);
	if (abs(first) == abs(second))
	{
		printf("WHERE IS MY CHICKEN?");
	}
	else
	{
		printf("WINNER WINNER CHICKEN DINNER!");
	}
	return 0;
}
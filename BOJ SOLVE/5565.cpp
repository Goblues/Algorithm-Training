#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t, a, sum = 0;
	scanf("%d", &t);
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &a);
		sum += a;
	}
	printf("%d", t-sum);	
	return 0;
}
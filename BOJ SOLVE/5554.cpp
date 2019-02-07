#include <bits/stdc++.h>
using namespace std;
int main()
{
	int sum = 0;
	int a;
	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &a);
		sum += a;
	}
	printf("%d\n", sum/60);
	printf("%d", sum-((sum/60)*60));
	return 0;
}
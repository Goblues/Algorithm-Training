#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", 2+b-a);
	}	
	return 0;
}
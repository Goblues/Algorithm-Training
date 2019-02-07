#include <bits/stdc++.h>
using namespace std;
int b[101];
int main()
{
	int n, a;
	int sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d ", &a);
		b[i] = a*(i+1)-sum;
		sum += b[i];		
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d ", b[i]);
	}
	return 0;
}
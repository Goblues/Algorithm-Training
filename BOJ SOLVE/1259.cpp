#include <bits/stdc++.h>
using namespace std;
char a[10];
char b[10];
int main()
{
	int ans;
	while (1)
	{
		scanf("%s", a);
		if (a[0] == '0' && strlen(a) == 1)
		{
			break;
		}
		for (int i = strlen(a)-1; i >= 0; i--)
		{
			for (int j = 0; j <= i; j++)
			{
				b[j] = a[i];
			}
		}
		printf("%s", b);
		ans = strcmp(a, b);
		if (ans == 0)
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}			
	}
	return 0;
}
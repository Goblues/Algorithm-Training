#include <bits/stdc++.h>
using namespace std;
char a[20];
char b[20];
int main()
{
	int num1;
	int cnt = 0;
	scanf("%s", a);
	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] == 'x')
		{
			cnt++;
			break;
		}
		else
		{
			b[i] = a[i];
		}
	}
	num1 = atoi(b);
	if (a[0] == 'x')
	{
		printf("1");
	}
	else if (a[0] == '-' && a[1] == 'x')
	{
		printf("-1");
	}
	else if (cnt == 0)
	{
		printf("0");
	}
	else
	{
		printf("%d", num1);
	}
	return 0;
}
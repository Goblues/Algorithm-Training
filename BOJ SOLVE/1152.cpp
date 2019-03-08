#include <bits/stdc++.h>
using namespace std;
char a[1000001];
int main()
{
	int cnt = 0;
	scanf("%[^\n]s", a);
	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] == ' ')
		{
			cnt++;
		}
	}
	if (a[0] == ' ')
	{
		if (a[strlen(a)-1] == ' ')
		{
			cnt = cnt - 1;
		}
	}
	else
	{
		if (a[strlen(a)-1] == ' ')
		{
			cnt = cnt;
		}
		else
		{
			cnt = cnt + 1;
		}
	}
	if (cnt < 0)
	{
		printf("0");
	}
	else
	{
		printf("%d", cnt);
	}
	return 0;
}
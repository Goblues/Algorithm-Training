#include <bits/stdc++.h>
using namespace std;
int a[10];
int tmp[10];
int c[5];
int main()
{
	for (int i = 0; i < 8; i++)
	{
		scanf("%d", &a[i]);
		tmp[i] = a[i];
	}
	sort(a, a+8, greater<int>());
	printf("%d\n", a[0]+a[1]+a[2]+a[3]+a[4]);
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 8; j++)
			if (a[i] == tmp[j])
				c[j] = j+1;
	sort(c, c+8, greater<int>());
	for (int i = 4; i >= 0; i--)
		printf("%d ", c[i]);
	return 0;
}
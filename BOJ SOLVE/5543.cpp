#include <bits/stdc++.h>
using namespace std;
int a[10];
int b[10];
int main()
{
	for (int i = 0; i < 5; i++)
		scanf("%d", &a[i]);
	b[0] = a[0] + a[3];
	b[1] = a[0] + a[4];
	b[2] = a[1] + a[3];
	b[3] = a[1] + a[4];
	b[4] = a[2] + a[3];
	b[5] = a[2] + a[4];
	sort(b, b+6);
	printf("%d", b[0]-50);
	return 0;
}	
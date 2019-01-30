#include <bits/stdc++.h>
using namespace std;
int a[10];
int b[10];
int main()
{
	for (int i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < 10; i++)
		scanf("%d", &b[i]);
	sort(a, a+10, greater<int>());
	sort(b, b+10, greater<int>());
	printf("%d %d", a[0]+a[1]+a[2], b[0]+b[1]+b[2]);
	return 0;
}
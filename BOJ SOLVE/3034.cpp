#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, w, h, a, s;
	double b;
	scanf("%d %d %d", &n, &w, &h);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		s = w*w+h*h;
		b = sqrt((double)s);
		if (b >= a)
		{
			printf("DA\n");
		}
		else
		{
			printf("NE\n");
		}
	}
	return 0;
}
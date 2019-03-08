#include <bits/stdc++.h>
using namespace std;
char a[100];
int main()
{
	int n, b;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", a);
		getchar();
		scanf("%d", &b);
		if (b <= 100 && b >= 97)
			printf("%s A+\n", a);
		else if (b <= 96 && b >= 90)
			printf("%s A\n", a);
		else if (b <= 89 && b >= 87)
			printf("%s B+\n", a);
		else if (b <= 86 && b >= 80)
			printf("%s B\n", a);
		else if (b <= 79 && b >= 77)
			printf("%s C+\n", a);
		else if (b <= 76 && b >= 70)
			printf("%s C\n", a);
		else if (b <= 69 && b >= 67)
			printf("%s D+\n", a);
		else if (b <= 66 && b >= 60)
			printf("%s D\n", a);
		else if (b <= 59 && b >= 0)
			printf("%s F\n", a);
	}
	
	return 0;
}
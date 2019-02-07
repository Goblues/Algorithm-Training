#include <bits/stdc++.h>
using namespace std;
char a[31];
char alpa[27];
int main()
{
	int n;
	int sum = 0;
	for (int i = 0; i < 26; i++)
		alpa[i] = i + 65;
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++)
	{
		scanf("%[^\n]s", a);
		for (int j = 0; j < strlen(a); j++)
			for (int k = 0; k < 26; k++)
				if (alpa[k] == a[j])
					sum = sum + (k+1);
		if (sum == 100)
			printf("PERFECT LIFE\n");
		else if (sum < 100)
			printf("%d\n", sum);
		else if (sum > 100)
			printf("%d\n", sum);
		sum = 0;
		getchar();
	}
	return 0;
}
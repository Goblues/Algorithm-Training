#include <bits/stdc++.h>

using namespace std;

int n;
char a[111];
char b[111];
char tmp[111];
char tmp2[111];

int main()
{		
	scanf("%d", &n);
	while(n--)
	{
		scanf(" %s %s", a, b);

		strcpy(tmp, a);
		strcpy(tmp2, b);

		sort(a, a+strlen(a));
		sort(b, b+strlen(b));

		if (!strcmp(a, b))
			printf("%s & %s are anagrams.\n", tmp, tmp2);
		else
			printf("%s & %s are NOT anagrams.\n", tmp, tmp2);
	}

	return 0;
}
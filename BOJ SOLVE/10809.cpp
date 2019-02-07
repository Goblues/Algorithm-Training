#include <bits/stdc++.h>
using namespace std;
char a[30];
char num[30];
char s[111];
int main()
{
	for (int i = 0; i < 26; i++)
		a[i] = (char)i+97;
	for (int i = 0; i < 26; i++)
		num[i] = -1;
	scanf("%s", s);
	for (int i = 0; i < strlen(s); i++)
		for (int j = 0; j < 26; j++)
			if (s[i] == a[j])
			{
				if (num[j] >= 0)
					continue;
				num[j] = i;
			}
	for (int i = 0; i < 26; i++)
		printf("%d ", num[i]);
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
int s[2];
int o[2];
int main()
{
	scanf("%d %d", &s[0], &o[0]);
	scanf("%d %d", &s[1], &o[1]);
	if (s[0]+o[1] >= s[1]+o[0])
		printf("%d", s[1]+o[0]);
	else
		printf("%d", s[0]+o[1]);
	return 0;
}
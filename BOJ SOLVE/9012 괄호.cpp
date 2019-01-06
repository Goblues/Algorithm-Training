#include <bits/stdc++.h>

using namespace std;
char a[51];
stack<char> s;
int n;
int main()
{
	scanf("%d", &n);

	while(n--)
	{
		scanf("%s", a);
		for (int i = 0; i < strlen(a); i++)
		{
			if (a[i] == '(')
			{
				s.push(a[i]);
			}
			else if (a[i] == ')')
			{
				if (s.empty())
				{
					s.push(a[i]);
					break;
				}
				else
				{
					s.pop();
				}
			}
			else
			{
				break;
			}
		}

		if (s.empty())
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}

		while(!s.empty())
		{
			s.pop();
		}
	}
	return 0;
}
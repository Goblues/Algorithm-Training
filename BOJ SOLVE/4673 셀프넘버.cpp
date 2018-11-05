#include <bits/stdc++.h>

using namespace std;

char num[10001][5];

int main()
{	
	for (int i = 0; i < 10000; i++)
	{
		num[i] = itoa(i);
	}

	printf("%s\n", num[9999]);
	

	return 0;
}
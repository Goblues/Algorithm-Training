#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
char a[101];
char check[5] = {'a', 'e', 'i', 'o', 'u'};
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>a;
	int size = strlen(a);
	for(int i = 0; i<size; i++)
	{
		for(int j = 0; j<5; j++)
		{
			if(a[i]==check[j])cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
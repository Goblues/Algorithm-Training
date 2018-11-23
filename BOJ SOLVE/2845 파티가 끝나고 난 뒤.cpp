#include <bits/stdc++.h>

using namespace std;

int main()
{	
	int l, p;
	scanf("%d %d", &l, &p);
	int lp = l*p;
	int rp1, rp2, rp3, rp4, rp5;
	scanf("%d %d %d %d %d", &rp1, &rp2, &rp3, &rp4, &rp5);

	printf("%d %d %d %d %d", rp1-lp, rp2-lp, rp3-lp, rp4-lp, rp5-lp);
	
	return 0;
}
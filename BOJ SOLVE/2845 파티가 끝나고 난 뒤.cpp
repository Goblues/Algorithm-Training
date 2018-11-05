#include <bits/stdc++.h>

using namespace std;

int main()
{	
	int l;
	int p;
	int p1, p2, p3, p4, p5;
	int rp1, rp2, rp3, rp4, rp5;

	scanf("%d %d", &l, &p);
	scanf("%d %d %d %d %d", &p1, &p2, &p3, &p4, &p5);

	int lp = l*p;

	if (p1 > lp)
		rp1 = p1-lp;
	else
		rp1 = -1*(p1-lp);

	if (p2 > lp)
		rp2 = p2-lp;
	else
		rp2 = lp-p2;

	if (p3 > lp)
		rp3 = p3-lp;
	else
		rp3 = lp-p3;

	if (p4 > lp)
		rp4 = p4-lp;
	else
		rp4 = lp-p4;

	if (p5 > lp)
		rp5 = p5-lp;
	else
		rp5 = lp-p5;

	printf("%d %d %d %d %d", rp1, rp2, rp3, rp4, rp5);

	return 0;
}
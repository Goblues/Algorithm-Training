#include <bits/stdc++.h>
using namespace std;
int a[10];
int b[10];
int c[10];
int main()
{
	int asum = 0; int suma = 0; int totala = 0;
	int bsum = 0; int sumb = 0; int totalb = 0;
	int csum = 0; int sumc = 0; int totalc = 0;
	for (int j = 0; j < 6; j++)
		scanf("%d ", &a[j]);
	for (int j = 0; j < 6; j++)
		scanf("%d ", &b[j]);
	for (int j = 0; j < 6; j++)
		scanf("%d ", &c[j]);
	asum = a[0]*3600 + a[1]*60 + a[2];
	suma = a[3]*3600 + a[4]*60 + a[5];
	bsum = b[0]*3600 + b[1]*60 + b[2];
	sumb = b[3]*3600 + b[4]*60 + b[5];
	csum = c[0]*3600 + c[1]*60 + c[2];
	sumc = c[3]*3600 + c[4]*60 + c[5];
	totala = suma - asum;
	totalb = sumb - bsum;
	totalc = sumc - csum;
	a[0] = totala/3600; a[1] = (totala-a[0]*3600)/60; a[2] = (totala-a[0]*3600-a[1]*60);
	b[0] = totalb/3600; b[1] = (totalb-b[0]*3600)/60; b[2] = (totalb-b[0]*3600-b[1]*60);
	c[0] = totalc/3600; c[1] = (totalc-c[0]*3600)/60; c[2] = (totalc-c[0]*3600-c[1]*60);
	printf("%d %d %d\n", a[0], a[1], a[2]);
	printf("%d %d %d\n", b[0], b[1], b[2]);
	printf("%d %d %d\n", c[0], c[1], c[2]);
	return 0;
}
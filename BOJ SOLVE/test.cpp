#include <bits/stdc++.h>
struct game
{
	char name[7];
	int R1, R2, R3;
};
int main()
{
	struct game player;
	double avg;
	scanf("%s", player.name);
	scanf("%d %d %d", &player.R1, &player.R2, &player.R3);
	avg = (double) (player.R1 + player.R2 + player.R3) / 3;
	printf("%s 선수의 게임 성적 평균 %.1lf점\n", player.name, avg);	
	return 0;	
}

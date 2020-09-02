#include <stdio.h>
int main()
{
	int T,r1,r2,B,ball_played;
	double current_run, asking_run;

	scanf("%d",&T);

	while(T--)
	{
		scanf("%d %d %d", &r1, &r2, &B);
		ball_played = 300- B;

		current_run = (r2*1.0/ball_played)*6;
		if(r2>r1)
			asking_run = 0;
		else
			asking_run = ((r1-r2+1)*1.0/B)*6;

		printf("%.2lf %.2lf\n",current_run, asking_run);
	}
	return 0;
}
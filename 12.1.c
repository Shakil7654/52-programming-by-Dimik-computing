#include <stdio.h>
int main()
{
	int T;
	scanf("%d",&T);

	while(T--)
	{
		int num; //zero_count=0;
		scanf("%d",&num);

		int i,zero_count=0;
		for(i=5; num/i>0; i*=5)
			zero_count+=num/i;
		printf("%d\n",zero_count);
	}
	//printf("%d\n",zero_count);

	return 0;
}
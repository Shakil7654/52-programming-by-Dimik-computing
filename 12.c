#include <stdio.h>

long long int factorial(long long int n)
{
	if(n==1)
		return 1;
	else
		return n*factorial(n-1);
}

int main()
{
	int T; //number of inputs.
	scanf("%d",&T);

	while(T--)
	{
		long long int num; // number to find the factorial.
		scanf("%lld", &num);

        num = factorial(num);

		int zero_count=0; // variable to count zero.

		while(num%10==0)
		{
			num = num/10;
			zero_count++;
		}

        printf("%d\n",zero_count);
	}
	return 0;
}
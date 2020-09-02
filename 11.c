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
	int T;
	scanf("%d",&T);

	while(T--){
		long long int num;
		scanf("%lld",&num);

		printf("%lld\n",factorial(num));
	}
	return 0;
}
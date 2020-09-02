#include <stdio.h>
#include <math.h>
int main()
{
	int T;
	scanf("%d",&T);
	int num;

	for(int i=1; i<=T; i++){
		scanf("%d",&num);
		int sq_root = sqrt(num);
		if(sq_root*sq_root == num){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}
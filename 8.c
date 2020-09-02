#include <stdio.h>
int main()
{
	int n1=1;
	int n2=1;
	int n3=1;
	

	if(n1>n2){
		int temp=n1;
		n1=n2;
		n2=temp;
	}
	if(n2>n3){
		int temp2= n2;
		n2=n3;
		n3=temp2;
	}
	if(n1>n2){
		int temp3=n1;
		n1=n2;
		n2=temp3;

	}
	printf("%d %d %d\n",n1,n2,n3);
	return 0;
}
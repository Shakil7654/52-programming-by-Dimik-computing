#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);

	for(int i=1;i<=T;i++){
		int n1,n2,n3;
        scanf("%d %d %d", &n1, &n2, &n3);

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
        printf("Case %d: %d %d %d\n",i,n1,n2,n3);
	}
	return 0;
}
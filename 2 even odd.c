#include<stdio.h>
#include<string.h>
int main()
{
    int T;
    scanf("%d",&T);

    char num[100];

    for(int i=0;i<T;i++){
        scanf("%s",num);

        if(num[strlen(num)-1]%2==0){
            printf("even\n");
        }
        else{
            printf("odd\n");
        }
    }

}

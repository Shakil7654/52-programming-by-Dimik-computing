#include <stdio.h>

int main()
{
    int T,i,n;
    scanf("%d\n",&T);

    for(i=1;i<=T;i++){
        scanf("%d/n",&n);
        printf("Case %d:",i);
        for(int j=1;j<=n;j++){
                if(n%j==0){
                    printf(" %d",j);
                }

        }
        printf("\n");
    }
    return 0;
}

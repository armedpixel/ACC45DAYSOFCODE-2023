#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        float n,m;
        scanf("%f%f",&n,&m);
        if ((n*0.9)<m)
        printf("Online\n");
        else if((n*0.9)==m)
        printf("Either\n");
        else
        printf("Dining\n");
    }

    return 0;
}

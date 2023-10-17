#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int c,x,y;
        scanf("%d%d%d",&c,&x,&y);
        x>c?printf("%d\n",0):printf("%d\n",y*(c-x));
    }

    return 0;
}

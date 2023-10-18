#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for (int i=0;i<t;i++){
        int n,x,y;
        scanf("%d%d%d",&n,&x,&y);
        y%x==0?printf("yes\n"):printf("no\n");
    }

    return 0;
}
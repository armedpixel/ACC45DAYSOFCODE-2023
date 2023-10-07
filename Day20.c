#include <stdio.h>

int main()
{
    int t;
    printf("Number of Testcases :");
    scanf("%d",&t);
    for (int i=0;i<t;i++){
        int x,y;
        printf("Enter initial volume and final volume :");
        scanf("%d%d",&x,&y);
        x>y?printf("Minimum Number of Button presses =%d\n",x-y):printf("Minimum Number of Button presses =%d\n",y-x);
    }

    return 0;
}

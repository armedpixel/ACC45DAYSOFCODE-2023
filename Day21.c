#include <stdio.h>

int main()
{
    int t;
    printf("Number of testcases :");
    scanf("%d",&t);
    for (int i=0;i<t;i++){
        int w,x,y,z;
        printf("Enter current account balance,Deposit,Bank charges and number of months :\n");
        scanf("%d%d%d%d",&w,&x,&y,&z);
        printf("Final Balance :%d\n",w+(x-y)*z);
    }

    return 0;
}

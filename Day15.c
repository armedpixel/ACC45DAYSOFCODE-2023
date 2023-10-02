
#include <stdio.h>

int main()
{
    int t;
    printf("No. of testcases :");
    scanf("%d",&t);
    for (int i=0;i<t;i++){
        int n,x;
        printf("Enter total number of cards and number of initially face up cards :\n");
        scanf("%d%d",&n,&x);
        (n-x)<x?printf("minimum numbeer of flips =%d\n",(n-x)):printf("minimum numbeer of flips =%d\n",x);
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int t;
    printf("No. of testcases :");
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int x,y,z;
        printf("Rent of cooler(per month):");
        scanf("%d",&x);
        printf("Cost of purchasing cooler :");
        scanf("%d",&y);
        (y/x)==0?printf("0\n"):(y/x)*x<y?printf("%d\n",y/x):printf("%d\n",(y/x)-1);
    }
    return 0;
}

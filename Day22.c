#include <stdio.h>

int main()
{
    int t;
    printf("Number of testcases :");
    scanf("%d",&t);
    for (int i=0;i<t;i++){
        int x,y,z;
        printf("Enter weight of a mango, weight of truck and maximum load bridge can withstand :\n");
        scanf("%d%d%d",&x,&y,&z);
        printf("Maximum number of mangoes that can be loaded :%d\n",(z-y)/x);
    }

    return 0;
}

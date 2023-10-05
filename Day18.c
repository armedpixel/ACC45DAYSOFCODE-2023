#include <stdio.h>

int main()
{
    int t;
    printf("Number of Testcases :");
    scanf("%d",&t);
    for (int i=0;i<t;i++){
        int a,b;
        printf("Enter Alice's score(0-6) and Bob's score(0-6) :\n");
        scanf("%d%d",&a,&b);
        a>b?printf("Minimum score required =%d\n",7-a):printf("Minimum score required =%d\n",7-b);
    }

    return 0;
}

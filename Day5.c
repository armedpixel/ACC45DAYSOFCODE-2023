#include <stdio.h>

int main()
{
    int t,x;
    printf("No. of testcases :");
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        printf("Enter Battery Percentage (0-100):");
        scanf("%d",&x);
        x<=15?printf("Yes\n"):printf("No\n");
    }
    return 0;
}

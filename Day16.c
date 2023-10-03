#include <stdio.h>

int main()
{
    int t;
    printf("No. of Testcases :");
    scanf("%d",&t);
    for (int i=0;i<t;i++){
        int n,m;
        printf("Enter the number of candies and number off friends :\n");
        scanf("%d%d",&n,&m);
        (n%m==0)&&((n/m)%2==0)?printf("YES\n"):printf("NO\n");
    }
    return 0;
}

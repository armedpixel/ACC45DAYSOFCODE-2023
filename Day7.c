#include <stdio.h>

int main()
{
    int t;
    printf("No. of testcases :");
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int x,y;
        printf("Following count:");
        scanf("%d",&x);
        printf("Follower count:");
        scanf("%d",&y);
        x>(y*10)?printf("YES\n"):printf("NO\n");
    }

    return 0;
}

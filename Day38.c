#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int a1,a2,b1,b2;
        scanf("%d%d%d%d",&a1,&a2,&b1,&b2);
        if ((a1-a2+b1-b2)<0)
        printf("Yes\n");
        else
        printf("No\n");
    }

    return 0;
}

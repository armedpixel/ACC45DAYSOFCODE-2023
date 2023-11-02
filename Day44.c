#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y;
        scanf("%d%d",&x,&y);
        if (x-y<=0)
        printf("%d\n",x);
        else
        printf("%d\n",2*x-y);
    }

    return 0;
}

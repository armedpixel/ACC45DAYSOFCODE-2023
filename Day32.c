#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y;
        scanf("%d%d",&x,&y);
        x>y?printf("%d\n",x-y):printf("%d\n",y-x);
    }

    return 0;
} 

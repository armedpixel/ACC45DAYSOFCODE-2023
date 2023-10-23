#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y;
        scanf("%d%d",&x,&y);
        if (20*y>x)
        printf("%d\n",x/y);
        else
        printf("%d\n",20);
    }
    
    return 0;
}

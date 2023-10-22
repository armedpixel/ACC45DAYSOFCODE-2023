#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int w,x,y,z;
        scanf("%d%d%d%d",&w,&x,&y,&z);
        if (w==x || w==y || w==y)
        printf("Yes\n");
        else if (w==(x+y) || w==(y+z) || w==(z+x))
        printf("Yes\n");
        else if (w==x+y+z)
        printf("Yes\n");
        else 
        printf("No\n");
    }

    return 0;
}

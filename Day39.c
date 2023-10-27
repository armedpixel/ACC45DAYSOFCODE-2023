#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while (t--){
        int x;
        scanf("%d",&x);
        if(x%5==0)
            printf("%d\n",(x/10)+((x%10)/5));
        else 
            printf("%d\n",-1);
    }

    return 0;
}

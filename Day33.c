#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while (t--){
        int a,b,x,y;
        scanf("%d%d%d%d",&a,&b,&x,&y);
        if (a<b)
        x>=(b-a)?printf("YES\n"):printf("No\n");
        else
        y>=(a-b)?printf("YES\n"):printf("NO\n");
    }
 
    return 0;
}

#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y,d,s;
        scanf("%d%d%d",&x,&y,&d);
        s=(x>y)?x-y:y-x;
        s<=d?printf("Yes\n"):printf("No\n");
        
    }

    return 0;
}

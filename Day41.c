#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int p,q;
        scanf("%d%d",&p,&q);
        ((p+q)%4==0 || (p+q)%4==1)?printf("Alice\n"):printf("Bob\n");
    }

    return 0;
}

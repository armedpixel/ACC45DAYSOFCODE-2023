#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for (int i=0;i<t;i++){
        int a,b,c,p;
        scanf("%d%d%d%d",&a,&b,&c,&p);
        if (a+b>=p || a+c>=p || b+c>=p){
            printf("yes\n");
        }else{
            printf("no\n");
        }
    }

    return 0;
}

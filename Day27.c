#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for (int i=0;i<t;i++){
        int x;
        scanf("%d",&x);
        if (x%3!=0){
            printf("%d\n",3-(x%3));
        }else{
            printf("%d\n",0);
        }
    }

    return 0;
}

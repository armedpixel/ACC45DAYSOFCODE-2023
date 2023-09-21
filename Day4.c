#include <stdio.h>

int main()
{
    int t,x,y;
    printf("No. of testcases:  ");
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        printf("Chef's goal: ");
        scanf("%d",&x);
        printf("No. of chocolates sold: ");
        scanf("%d",&y);
        if(y<=x){
            printf("Total amount made by Chef %d\n",y);
        }else{
            printf("Total amount made by Chef %d\n",y+(y-x)*2);
        }
    }

    return 0;
}

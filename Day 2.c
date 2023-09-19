#include <stdio.h>

int main()
{
    int t , x , y , z ;
    printf("Enter No. of testcases:");
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        printf("No. of Rs.5 coins:");
        scanf("%d",&x);
        printf("No.of Rs.10 coins:");
        scanf("%d",&y);
        printf("Price of one chocolate: ");
        scanf("%d",&z);
        printf("No.of chocolates chef can buy is %d",(5*x+10*y)/z);
        
    }

    return 0;
}


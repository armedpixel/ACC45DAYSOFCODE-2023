#include <stdio.h>

int main()
{
    int t;
    printf("Number of Testcases :");
    scanf("%d",&t);
    for (int i=0;i<t;i++){
        int n;
        printf("Enter number of chocolates (>=4) :");
        scanf("%d",&n);
        if (n>=4){
            printf("Number of chocolates in each jar:%d %d %d\n",1,1,n-2);
        }else{
            printf("Enter a number (>=4)\n");
        }
    }    
    return 0;
}

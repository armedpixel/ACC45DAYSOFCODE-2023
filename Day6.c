#include <stdio.h>

int main()
{
    int t;
    printf("No. of testcases: ");
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int N,c;
        printf("No. of Friends :");
        scanf("%d",&N);
        c=N%4==0?N/4:(N/4)+1;
        printf("No of cars required :%d\n",c);
        
    }
    return 0;
}

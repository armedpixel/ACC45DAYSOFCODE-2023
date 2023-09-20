/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int t , x , y ;
    printf("No. of Testcases :");
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        printf("No. of students: ");
        scanf("%d",&x);
        printf("No. of existing chairs: ");
        scanf("%d",&y);
        if(x<=y){
            printf("0\n");
        }else{
            printf("%d\n",x-y);
        }
    }

    return 0;
}

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int t;
    printf("No. of testcases :");
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int N,M;
        printf("enter no. of runs required and remaing no. of overs :\n");
        scanf("%d%d",&N,&M);
        (M*6*6)>=N?printf("YES\n"):printf("NO\n");
    }

    return 0;
}

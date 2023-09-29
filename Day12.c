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
        int x,y,z;
        printf("Enter speed of bullet, distance and Time :");
        scanf("%d%d%d",&x,&y,&z);
        (y/x)<=z?printf("%d\n",z-(y/x)):printf("%d\n",0);
    }

    return 0;
}

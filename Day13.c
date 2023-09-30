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
        int a,b,x,y;
        printf("Enter amount of power(units per gram) and no. of years :\n");
        scanf("%d%d",&a,&b);
        printf("Enter amount of helium-3 and power generated per gram :\n");
        scanf("%d%d",&x,&y);
        (a*b)<=(x*y)?printf("YES\n"):printf("NO\n");
    }

    return 0;
}

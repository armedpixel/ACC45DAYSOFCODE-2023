#include <stdio.h>

int main()
{
    int t;
    printf("No.of testcases: ");
    scanf("%d",&t);
    for (int i=0;i<t;i++){
        int x,y;
        printf("Enter the stair number and number stairs chef can climb in one move :\n");
        scanf("%d%d",&x,&y);
        (x%y)==0?printf("no. of moves = %d\n",x/y):printf("no. of moves =%d\n",(x/y)+(x%y));
    }

    return 0;
}

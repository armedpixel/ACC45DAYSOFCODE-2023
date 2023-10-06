#include <stdio.h>

int main()
{
    int t;
    printf("Number of testcases: ");
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int pa,pb,qa,qb,a,b;
        printf("Enter P(A) and P(B)");
        scanf("%d%d",&pa,&pb);
        printf("Enter Q(A) and Q(B)");
        scanf("%d%d",&qa,&qb);
        a=pa>pb?pa:pb;
        b=qa>qb?qa:qb;
        a<b?printf("P\n"):a==b?printf("Tie\n"):printf("Q\n");
    }

    return 0;
}

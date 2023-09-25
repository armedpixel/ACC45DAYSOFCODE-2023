#include <stdio.h>

int main()
{
    int t;
    printf("No. of testcases: ");
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int x,y;
        printf("Enter capacity of geyser(in L):");
        scanf("%d",&x);
        printf("Enter capacity of bucket(in L):");
        scanf("%d",&y);
        printf("Maximum no. of people that can take bath :%d\n",x/(2*y));
    }
    return 0;
}

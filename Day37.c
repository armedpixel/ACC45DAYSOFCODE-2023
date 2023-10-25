#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        (n==1 || n%2==0)?printf("Yes\n"):printf("No\n");
    }

    return 0;
}

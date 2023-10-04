#include <stdio.h>

int main(){
    int t;
    printf("NO. of Testcases :");
    scanf("%d",&t);
    for (int i=0;i<t;i++){
        int n;
        printf("Enter Seat Number(1-30) :");
        scanf("%d",&n);
        if (1<=n && n<=10){
            printf("Lower Double\n");
        }else if(11<=n && n<=15){
            printf("Lower Single\n");
        }else if(16<=n && n<=25){
            printf("Upper Double\n");
        }else if(25<=n && n<=30){
            printf("Upper Single\n");
        }
    }

    return 0;
}

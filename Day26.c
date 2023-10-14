#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for (int i=0;i<t;i++){
        int Pa,Pb,Pc;
        scanf("%d%d%d",&Pa,&Pb,&Pc);
        (Pa+Pc)>Pb?printf("%d\n",Pa+Pc):printf("%d\n",Pb);
    }

    return 0;
}

int main()
{
    int t,max;
    scanf("%d",&t);
    for (int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        max=(n>max)?n:max;
    }
    printf("%d\n",max);
    return 0;
}

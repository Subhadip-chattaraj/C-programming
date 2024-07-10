#include<stdio.h>
int saveThePrisoner(int n, int m, int s) 
{
    int p=(m%n)+(s-1);
    return p;
}
int main()
{
    int t;
    scanf("%d",&t);
    int n[t][3];
    for(int i=0;i<t;i++)
        scanf("%d %d %d",&n[i][0],&n[i][1],&n[i][2]);
    for(int i=0;i<t;i++)
        printf("%d\n",saveThePrisoner(n[i][0],n[i][1],n[i][2]));
    return 0;
}
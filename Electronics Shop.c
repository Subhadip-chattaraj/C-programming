#include<stdio.h>
#include<stdlib.h>
//Electronics Shop
int getMoneySpent(int keyboards_count, int* keyboards, int drives_count, int* drives, int b)
{
    int maxcost=-1,cost;
    for(int i=0;i<keyboards_count;i++)
    {
        for(int j=0;j<drives_count;j++)
        {
            cost=keyboards[i]+drives[j];
            if(cost<=b && cost>maxcost)
                maxcost=cost;
        }
    }
    return maxcost;
}
int main()
{
    int b,k,p;
    scanf("%d %d %d",&b,&k,&p);
    int *keyboard=(int*)malloc(sizeof(int)*k);
    int *pendrive=(int*)malloc(sizeof(int)*p);
    for(int i=0;i<k;i++)
        scanf("%d",&keyboard[i]);
    for(int i=0;i<p;i++)
        scanf("%d",&pendrive[i]);
    printf("%d",getMoneySpent(k,keyboard,p,pendrive,b));
    return 0;
}
#include<stdio.h>
int jumpingOnClouds(int c_count, int* c)
{
    int i=0,j=0;
    while(i<c_count-1)
    {
        if(c[i+2]==0)
            i=i+2;
        else
            i++;
        j++;
    }
    return j;
}
int main()
{
    int k;
    scanf("%d",&k);
    int c[k];
    for(int i=0;i<k;i++)
        scanf("%d",&c[i]);
    printf("%d",jumpingOnClouds(k,c));
    return 0;
}

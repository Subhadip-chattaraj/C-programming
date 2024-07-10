#include<stdio.h>
#include<stdlib.h>
int angryProffssor(int *h,int n,int k)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(h[i]<=0)
            count++;
        if(count==k)
            return 0;
    }
    return 1;
}
int main()
{
    int t,n,k;
    scanf("%d",&t);
    int res[t];
    for(int i=0;i<t;i++)
    {
        scanf("%d %d",&n,&k);
        int b[n];
        for(int j=0;j<n;j++)
            scanf("%d",&b[j]);
        res[i]=angryProffssor(b,n,k);
    }
    for(int i=0;i<t;i++)
    {
        if(res[i]==0)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
void serviceLane(int n, int t,int *w,int c[][2])
{
    int l=0;
    for(int i=0;i<t;i++)
    {
        int start =c[i][0];
        int end=c[i][1];
        l=w[end];
        for(int j=start;j<=end;j++)
        {
            if(w[j]<l)
                l=w[j];
        }
        printf("%d\n",l);
    }
}
int main()
{
    int n,t;
    scanf("%d %d",&n,&t);
    int width[n],cas[t][2];
    for(int i=0;i<n;i++)
        scanf("%d",&width[i]);
    for(int i=0;i<t;i++)
        scanf("%d %d",&cas[i][0],&cas[i][1]);
    serviceLane(n,t,width,cas);
    return 0;
}

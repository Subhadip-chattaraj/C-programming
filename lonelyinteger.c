#include<stdio.h>
int lonelyinteger(int a_count, int* a) 
{
    int f;
    for(int i=0;i<a_count;i++)
    {
        if(a[i]!=-1)
        {
            f=1;
            if((i+1)<a_count)
            {
                for(int j=i+1;j<a_count;j++)
                {
                    if(a[i]==a[j])
                    {
                        f++;
                        a[j]=-1;
                    }
                }
            }
            if(f==1)
                return a[i];
        }
    }
}
int main()
{
    int n,a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("%d",lonelyinteger(n,a));
}
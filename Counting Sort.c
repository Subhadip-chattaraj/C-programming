#include<stdio.h>
int main()
{
    static int d[100];
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(int i=0;i<n;i++)
    {
        int m=a[i];
        d[m]++;
    }

    for(int i=0;i<100;i++
        printf("%d ",d[i]);
    return 0;
}

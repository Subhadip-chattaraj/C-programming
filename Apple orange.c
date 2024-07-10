#include<stdio.h>
int main()
{
    int s,t,a,b,m,n,c1=0,c2=0;
    scanf("%d %d",&s,&t);
    scanf("%d %d",&a,&b);
    scanf("%d %d",&m,&n);
    int apple,mengo;
    for(int i=0;i<m;i++)
    {
        scanf("%d",&apple);
        if((a+apple)>=s && (a+apple)<=t)
                c1++;
    }
    for(int i=0;i<n;i++)
    {
         scanf("%d",&mengo);
         if((b+mengo)<=t && (b+mengo)>=s)
            c2++;
    }
    printf("%d\n%d",c1,c2);
    return 0;
}

#include<stdio.h>
int rev(int num)
{
    int n,m=0;
    while(num>0)
    {
        n=num%10;
        m=m*10+n;
        num=num/10;
    }
    return m;
}
int beautifulDays(int st,int en,int k)
{
    int cont=0;
    for(int i=st;i<=en;i++)
    {
        int re=rev(i);
        if((i-re)%k==0)
            cont++;
    }
    return cont;
}
int main()
{
    int i,j,k;
    scanf("%d %d %d",&i,&j,&k);
    printf("%d",beautifulDays(i,j,k));
    return 0;
}

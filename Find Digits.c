#include<stdio.h>
int findDigits(int n) 
{
    int num=n,m,c=0;
    while(num>0)
    {
        m=num%10;
        if(m!=0 && n%m==0)
            c++;
        num=num/10;
    }
    return c;
}
int main()
{
    int t;
    scanf("%d",&t);
    int n[t];
    for(int i=0;i<t;i++)
        scanf("%d",&n[i]);
    for(int i=0;i<t;i++)
        printf("%d\n",findDigits(n[i]));
    return 0;
}
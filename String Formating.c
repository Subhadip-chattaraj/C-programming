#include<stdio.h>
void caserCiper(char *a,int n,int k)
{
    char b[n];
    for(int i=0;i<n;i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
        {
            int m=a[i]+k;
             while(m>90)
                m=(m-90)+64;

             b[i]=(char)(m);
        }
        else if(a[i]>='a'&&a[i]<='z')
        {
             int m=a[i]+k;
             while(m>122)
                m=(m-122)+96;

             b[i]=(char)(m);
        }
        else
            b[i]=a[i];
    }
    for(int i=0;i<n;i++)
        printf("%c",b[i]);
}
int main()
{
    int n,k;
    char str[100];
    scanf("%d",&n);
    scanf("%s",str);
    scanf("%d",&k);
    caserCiper(str,n,k);
    return 0;
}

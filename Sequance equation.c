#include<stdio.h>
void permutationEquation(int n,int *t)
{
    for(int i=1;i<=n;i++)
    {
        for(int x=0;x<n;x++)
        {
            if(t[x]==i)
            {
                for(int y=0;y<n;y++)
                {
                    if(t[y]==(x+1))
                    {
                        printf("%d\n",y+1);
                        break;
                    }
                }
                break;
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int t[n];
    for(int i=0;i<n;i++)
        scanf("%d",&t[i]);
    permutationEquation(n,t);
}
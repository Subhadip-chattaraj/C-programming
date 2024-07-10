#include<stdio.h>
void breakingRecord(int *s,int n)
{
    int max,min,max_co,min_co;
    max=s[0];   max_co=0;
    min=s[0];   min_co=0;
    for(int i=1;i<n;i++)
    {
        if(s[i]<min)
        {
            min=s[i];
            min_co++;
        }
        else if(s[i]>max)
        {
            max=s[i];
            max_co++;
        }
    }
    printf("%d %d",max_co,min_co);
}
int main()
{
    int n;
    scanf("%d",&n);
    int score[n];
    for(int i=0;i<n;i++)
        scanf("%d",&score[i]);

    breakingRecord(score,n);
    return 0;
}

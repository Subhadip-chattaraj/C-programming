#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    int maxhight;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(i==0)
            maxhight=arr[i];
        else if(arr[i]>maxhight)
            maxhight=arr[i];
    }
    int count=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==maxhight)
            count++;
    }
    printf("%d",count);
    return 0;
}

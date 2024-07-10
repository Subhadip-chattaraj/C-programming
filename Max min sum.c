#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int min=0,max=0;
    for(int i=1;i<n;i++)
        max=max+arr[i];
    for(int i=0;i<n-1;i++)
       min=min+arr[i];
    printf("%d  %d",min,max);
    return 0;
}

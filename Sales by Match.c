#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int *arr;
    arr=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j] && arr[i]!=0 && arr[j]!=0)
            {
                arr[i]=0;
                arr[j]=0;
                c++;
                break;
            }
        }
    }
    printf("%d",c);
    free(arr);
    return 0;
}
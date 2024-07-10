#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%d",&arr[i][j]);
    }
    int s1=0,s2=0;
    for(int i=0;i<n;i++)
    {
        s1=s1+arr[i][i];
        s2=s2+arr[i][n-1-i];
    }
    int dif=s1-s2;
    printf("%d",abs(dif));
    return 0;
}

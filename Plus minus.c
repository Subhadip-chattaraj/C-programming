#include<stdio.h>
void plusMinus(int arr_count, int* arr)
{
    float p=0,n=0,z=0;
    for(int i=0;i<arr_count;i++)
    {
        if(arr[i]>0)
            p++;
        else if(arr[i]<0)
            n++;
        else
            z++;
    }
    printf("%f",p/arr_count);
    printf("\n%f",n/arr_count);
    printf("\n%f",z/arr_count);

}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    plusMinus(n,arr);
    return 0;
}

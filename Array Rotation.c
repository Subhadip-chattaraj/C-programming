/*#include<stdio.h>
#include<stdlib.h>
void circularArrayRotation(int n, int* arr, int k)
{
    if(k%n==0)
    {
        for(int i=0;i<q;i++)
        {
            int j=qrr[i];
            printf("%d\n",arr[j]);
        }
        return;
    }
    for(int j=0;j<k;j++)
    {
        int a=arr[0],b;
        arr[0]=arr[n-1];
        for(int i=1;i<n;i++)
        {
            b=arr[i];
            arr[i]=a;
            a=b;
        }
    }
    for(int i=0;i<q;i++)
    {
        int j=qrr[i];
        printf("%d\n",arr[j]);
    }
}
int main()
{
    int n,k,q;
    scanf("%d %d %d",&n,&k,&q);
    int *arr=(int*)malloc(sizeof(int)*n);
    int *qrr=(int*)malloc(sizeof(int)*q);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<q;i++)
        scanf("%d",&qrr[i]);
    circularArrayRotation(n,arr,k);
    return 0;
}*/
#include <stdio.h>

void circularArrayRotation(int n, int arr[], int k, int q, int qrr[]) {
    // Calculate the effective rotation count
    k = k % n;
    for (int i = 0; i < q; i++) 
    {
        int j = qrr[i];
        // Calculate the index after rotation
        int rotated_index = (j - k + n) % n;
        printf("%d\n", arr[rotated_index]);
    }
}

int main() {
    int n, k, q;
    scanf("%d %d %d", &n, &k, &q);
    int arr[n];
    int qrr[q];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < q; i++)
        scanf("%d", &qrr[i]);
    circularArrayRotation(n, arr, k, q, qrr);
    return 0;
}


#include<stdio.h>
#include<math.h>
int main()
{
    int q;
    scanf("%d",&q);
    int arr[q][3];
    for(int i=0;i<q;i++)
    {
        for(int j=0;j<3;j++)
            scanf("%d",&arr[i][j]);
    }
    for(int i=0;i<q;i++)
    {
        int x,y;
        x=abs(arr[i][0]-arr[i][2]);
        y=abs(arr[i][1]-arr[i][2]);
        if(x<y)
            printf("Cat A");
        else if(x>y)
            printf("Cat B");
        else
            printf("Mouse C");
        printf("\n");
    }
    return 0;
}

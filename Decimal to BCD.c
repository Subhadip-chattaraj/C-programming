#include<stdio.h>
int main()
{
    int num;
    printf("Enter the decimal number:");
    scanf("%d",&num);
    int l=0;
    int n=num;
    while(n)
    {
      l++;
      n=n/10;
    }
    int bcdnum[l][4];
    int len=l;
    while(num)
    {
        int n=num%10;
        switch(n)
        {
            case 0: bcdnum[l-1][3]=0;
                    bcdnum[l-1][2]=0;
                    bcdnum[l-1][1]=0;
                    bcdnum[l-1][0]=0;
                    break;
            case 1: bcdnum[l-1][3]=1;
                    bcdnum[l-1][2]=0;
                    bcdnum[l-1][1]=0;
                    bcdnum[l-1][0]=0;
                    break;
            case 2: bcdnum[l-1][3]=0;
                    bcdnum[l-1][2]=1;
                    bcdnum[l-1][1]=0;
                    bcdnum[l-1][0]=0;
                    break;
            case 3: bcdnum[l-1][3]=1;
                    bcdnum[l-1][2]=1;
                    bcdnum[l-1][1]=0;
                    bcdnum[l-1][0]=0;
                    break;
            case 4: bcdnum[l-1][3]=0;
                    bcdnum[l-1][2]=0;
                    bcdnum[l-1][1]=1;
                    bcdnum[l-1][0]=0;
                    break;
            case 5: bcdnum[l-1][3]=1;
                    bcdnum[l-1][2]=0;
                    bcdnum[l-1][1]=1;
                    bcdnum[l-1][0]=0;
                    break;
            case 6: bcdnum[l-1][3]=0;
                    bcdnum[l-1][2]=1;
                    bcdnum[l-1][1]=1;
                    bcdnum[l-1][0]=0;
                    break;
            case 7: bcdnum[l-1][3]=1;
                    bcdnum[l-1][2]=1;
                    bcdnum[l-1][1]=1;
                    bcdnum[l-1][0]=0;
                    break;
            case 8: bcdnum[l-1][3]=0;
                    bcdnum[l-1][2]=0;
                    bcdnum[l-1][1]=0;
                    bcdnum[l-1][0]=1;
                    break;
            case 9: bcdnum[l-1][3]=1;
                    bcdnum[l-1][2]=0;
                    bcdnum[l-1][1]=0;
                    bcdnum[l-1][0]=1;
        }
        num=num/10;
        l--;
    }
    printf("The BCD code is: ");
    for(int i=0;i<len;i++)
    {
        printf("%d %d %d %d",bcdnum[i][0],bcdnum[i][1],
                            bcdnum[i][2],bcdnum[i][3]);
        printf("    ");
    }
    return 0;
}

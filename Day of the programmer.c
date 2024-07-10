#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,leap=0;
    scanf("%d",&n);
    if(n>1918 && n%400==0 || (n%4==0 && n%100!=0))
        leap=1;
    if(n<1919 && n%4==0)
        leap=1;
    int daycount=0,m,day;
    for(int i=1;i<=12;i++)
    {
        switch(i)
        {
            case 1:day=31;
            break;
            case 2:day=28+leap;
            break;
            case 3:day=31;
            break;
            case 4:day=30;
            break;
            case 5:day=31;
            break;
            case 6:day=30;
            break;
            case 7:day=31;
            break;
            case 8:day=31;
            break;
            case 9:day=30;
            break;
            case 10:day=31;
            break;
            case 11:day=30;
            break;
            case 12:day=31;
            break;
        }
        daycount=daycount+day;
        if(daycount>256)
        {
            m=i;
            daycount=256-(daycount-day);
            break;
        }
    }
    printf("%d.0%d.%d",daycount,m,n);
    return 0;
}

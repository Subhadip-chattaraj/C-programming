#include<stdio.h>
#include<math.h>
int viralAdvertising(int n) 
{
    int like=0,cumulative=0,shared=5;
    for(int i=1;i<=n;i++)
    {
        like=floor(shared/2);
        shared=like*3;
        cumulative=cumulative+like;
    }
    return cumulative;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",viralAdvertising(n));
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
int pageCount(int n,int p)
{
    int counter=0;
    int rightpage=1,leftpage=0,backleftpage,backrightpage;
    if(n%2==0)
    {
        backleftpage=n;
        backrightpage=0;
    }
    else
    {
        backrightpage=n;
        backleftpage=backrightpage-1;
    }
    while(1)
    {
        if(leftpage==p || rightpage==p||backleftpage==p||backrightpage==p)
            break;
        counter++;
        leftpage=rightpage+1;
        rightpage=leftpage+1;
        backrightpage=backleftpage-1;
        backleftpage=backrightpage-1; 
        printf("%d %d %d %d\n",leftpage,rightpage,backleftpage,backrightpage);
    }
    return counter;
}
int main()
{
    int n,p;
    scanf("%d",&n);
    scanf("%d",&p);
    printf("%d",pageCount(n,p));
    return 0;
}
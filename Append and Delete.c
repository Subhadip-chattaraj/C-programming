#include<stdio.h>
#include<string.h>
int appendAndDelete(char* s, char* t, int k)
{
    if(strcasecmp(s,t)==0)
        return 1;
    int m,n,i,j;
    m=strlen(s);
    n=strlen(t);
    i=j=0;
    while(i<m && j<n && s[i]==t[j])
    {
        i++;
        j++;
        if (j>n)
            j--;
        if(i>m)
            i--;
    }
    int del =m-i;
    int add=n-j;
    printf("%d %d\n",i,j);
    int r=del+add;
    if(r==k)
        return 1;
    return 0;
}
int main()
{
    char s[100],t[100];
    int k;
    scanf("%s",&s);
    scanf("%s",&t);
    scanf("%d",&k);
    int r=appendAndDelete(s,t,k);
    if(r==1)
        printf("Yes");
    else
        printf("No");
    return 0;
}

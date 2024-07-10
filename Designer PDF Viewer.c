#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int designerPdfViewer(int h_count, int* h, char* word) 
{
    int hight=0,m;
    for(int i=0;i<h_count;i++)
    {
        m=(word[i])-97;
        if(h[m]>hight)
            hight=h[m];
    }
    return (h_count*hight*1);
}
int main()
{
    int h[26];
    char word[11];
    for(int i=0;i<26;i++)
        scanf("%d",&h[i]);
    scanf("%s",word);
    printf("%d",designerPdfViewer(strlen(word),h,word));
    return 0;
}
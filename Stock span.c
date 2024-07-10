#include <stdio.h>
void calculateSpan(int *a, int size)
{
    int s[size];
    s[0] = 1;
    int span = 1, j;
    for (int i = 1; i < size; i++)
    {
        j = i - 1;
        span = 1;
        while (a[i] > a[j] && j >= 0)
        {
            span++;
            j--;
        }
        s[i] = span;
    }
    printf("\nSpan will be: ");
    for (int i = 0; i < size; i++)
        printf("%d ", s[i]);
}
int main()
{
    int size;
    printf("Enter number of data:");
    scanf("%d", &size);
    int data[size];
    printf("Enter %d data\n", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &data[i]);
    for (int i = 0; i < size; i++)
        printf("%d ", data[i]);
    calculateSpan(data, size);
    return 0;
}
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of ice-creams: ");
    scanf("%d", &n);

    if(n<=1) //Test case-1
    {
        printf("Number of Ice-cream Can't less then Two!!");
        return 0;
    }

    int *heights;
    heights=(int*)calloc(n*sizeof(int));

    printf("Enter the heights of the ice-creams:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &heights[i]);
        if(heights[i]<1)//Test case-2
        {
            printf("Oops,Height can't be negative!please re enter height.");
            i--;
        }
    }

    int motu_index = 0, patlu_index = n - 1;
    int motu_eaten = 0, patlu_eaten = 0;
    int motu_time = 0, patlu_time = 0;

    while (motu_index <= patlu_index)
    {
        if (motu_time <= patlu_time)
        {
            motu_time += 2 * heights[motu_index];
            motu_eaten++;
            motu_index++;
        }
        else
        {
            patlu_time += heights[patlu_index];
            patlu_eaten++;
            patlu_index--;
        }
    }

    printf("Motu ate %d ice-creams.\n", motu_eaten);
    printf("Patlu ate %d ice-creams.\n", patlu_eaten);

    if (motu_eaten > patlu_eaten)
        printf("Motu wins!\n");
    else if (motu_eaten < patlu_eaten)
        printf("Patlu wins!\n");
    else
        printf("It's a tie!\n");
    free(heights);
    return 0;
}

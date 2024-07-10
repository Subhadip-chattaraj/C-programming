#include <stdio.h>
#include <string.h>
#include <math.h>

// Function to convert a binary string to a decimal number
int binary_to_decimal(char *binary_string) 
{
    unsigned int decimal_number = 0;
    int length = strlen(binary_string);

    for (int i = 0; i < length; i++) 
            decimal_number += (binary_string[length - 1 - i] - '0') * pow(2, i);
    return decimal_number;
}
int numSteps(char* s) 
{
    unsigned int decimal=binary_to_decimal(s);
    int step=0;
    while(decimal!=1)
    {
        step++;
        if(decimal %2 !=0)
        {
            decimal++;
            step++;
        }
        decimal=decimal/2;
    }
    return step; 
}

int main() 
{
    char binary_string[500];
    scanf("%s",&binary_string);
    int decimal_number = binary_to_decimal(binary_string);

    if (decimal_number != -1) {
        printf("The decimal equivalent of binary '%s' is %d\n", binary_string, decimal_number);
    } else {
        printf("Invalid binary string\n");
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int utopainTree(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            arr[i] = arr[i / 2] * 2;
        else
            arr[i] = arr[i / 2] + 1;
    }
    return arr[n - 1];
}

int main() {
    int t;
    scanf("%d", &t);

    int *n = (int *)malloc(sizeof(int) * t);
    for (int i = 0; i < t; i++)
        scanf("%d", &n[i]);

    int max_n = 0;
    for (int i = 0; i < t; i++)
        if (n[i] > max_n)
            max_n = n[i];

    int *res = (int *)malloc(sizeof(int) * max_n);
    res[0] = 1;

    for (int i = 1; i <= max_n; i++)
        res[i] = 0; // Initialize all elements to 0

    int c = utopainTree(res, max_n);

    for (int i = 0; i < t; i++)
        printf("%d\n", res[n[i] - 1]);

    free(n);
    free(res);
    return 0;
}

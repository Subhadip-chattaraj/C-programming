#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle *tr, int n)
{
	/*
	  Sort an array a of the length n
	 */
	triangle x;
	float p, s, flag;
	float *area = malloc(n * sizeof(float));
	for (int i = 0; i < n; i++)
	{
		p = (tr[i].a + tr[i].b + tr[i].c) / 2;
		s = sqrt(p * (p - tr[i].a) * (p - tr[i].b) * (p - tr[i].c));
		area[i] = s;
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (area[j + 1] < area[j])
			{
				flag = area[j];
				area[j] = area[j + 1];
				area[j + 1] = flag;

				x = tr[j];
				tr[j] = tr[j + 1];
				tr[j + 1] = x;
			}
		}
	}
	for (int i = 0; i < n; i++)
		printf("%f ", area[i]);
}

int main()
{
	int n;
	printf("Enter numbers of Triangles:");
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	printf("\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
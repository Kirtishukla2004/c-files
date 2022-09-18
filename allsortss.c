#include <stdio.h>

void bubble(int n, int c, int d, int swap)
{
    int array[n];
    printf("Enter number of elements\n");
    scanf("%d", &n);

    printf("Enter %d integers\n", n);

    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

    for (c = 0; c < n - 1; c++)
    {
        for (d = 0; d < n - c - 1; d++)
        {
            if (array[d] > array[d + 1])
            {
                swap = array[d];
                array[d] = array[d + 1];
                array[d + 1] = swap;
            }
        }
    }

    printf("Sorted list in ascending order:\n");

    for (c = 0; c < n; c++)
        printf("%d\n", array[c]);
}

void selection(int i, int len)
{
    printf("Enter the arrey length:");
    scanf("%d", &len);
    int arrey[len];

    printf("enter  %d arrey elements:", len);
    for (i = 0; i < len; i++)
    {
        printf(" arr[%d] = ", i);
        scanf("%d", &arrey[i]);
    }

    int j, min_idx, temp;

    for (i = 0; i < len - 1; i++)
    {

        min_idx = i;
        for (j = i + 1; j < len; j++)
        {
            if (arrey[j] < arrey[min_idx])
                min_idx = j;
        }

        temp = arrey[min_idx];
        arrey[min_idx] = arrey[i];
        arrey[i] = temp;
    }
    printf("sorted arrey");
    for (i = 0; i < len; i++)
    {
        printf("%d\n\n", arrey[i]);
    }
}

void insertion(int t, int i, int len, int j)
{

    printf("Enter the arrey length:");
    scanf("%d", &len);
    int arrey[len];

    printf("enter  %d arrey elements:", len);
    for (i = 0; i < len; i++)
    {
        printf(" arr[%d] = ", i);
        scanf("%d", &arrey[i]);
    }

    for (i = 1; i <= len - 1; i++)
    {
        for (j = i; j > 0 && arrey[j - 1] > arrey[j]; j--)
        {
            t = arrey[j];
            arrey[j] = arrey[j - 1];
            arrey[j - 1] = t;
        }
    }
    printf("after insertion sorting the elements are:\n");
    for (i = 0; i < len; i++)
        printf("%d\t", arrey[i]);
}

int main()
{
    int ch, n, c, d, swap, arr, low, high, t, len, j, i;

    printf("\nenter the which function you wanna perform\n \n  A. enter 3 for insertion sort element in an arrey\n\n B. enter 2 for selection sort of the arrey element \n\n C. enter 1 for bubble sort the arrey \n\n ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        bubble(n, c, d, swap);
        break;
    case 2:
        selection(i, len);
        break;
    case 3:
        insertion(t, i, len, j);
        break;

    default:
        printf("!!Invalid choice");
        break;
    }
}

#include <stdio.h>

int main()
{
    // Initialize array

    int i, len;
    system("cls");
    printf("Enter the arrey length:");
    scanf("%d", &len);
    int arrey[len];

    printf("enter  %d arrey elements:", len);
    for (i = 0; i < len; i++)
    {
        printf(" arr[%d] = ", i);
        scanf("%d", &arrey[i]);
    }
    printf("\n");

    printf("Array in reverse order: \n");
    // Loop through the array in reverse order
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%d ", arrey[i]);
    }
    return 0;
}
#include <stdio.h>
int main()
{

    int arr[10], i, j, temp;

    printf("Enter the numbers of the array : ");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0, j = 9; i < j; i++, j--)
    {

        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    printf("\nThe reverse is : ");

    for (i = 0; i < 10; i++)
    {
        printf("\t%d", arr[i]);
    }

    return 0;
}

// we have to find the reverse of a number

#include <stdio.h>

int main()
{

    int rev=0, n, temp, i;

    printf("Enter the number : ");
    scanf("%d", &n);

    temp = n;

    while (n != 0)
    {

        i = n % 10;
        rev = rev * 10 + i;
        n / 10;
    }

    printf("The Reverse is : %d ", rev);

    return 0;
}
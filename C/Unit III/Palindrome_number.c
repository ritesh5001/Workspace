
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
        n = n / 10;
    }
if(rev==temp){
    printf("%d is a Palindrome number",rev);
}
else {printf("%d is not a Palindrome",temp);}
    return 0;
}
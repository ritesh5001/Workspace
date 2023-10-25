#include<stdio.h>
int main(){

int num1, num2;
char ch;

printf("enter the value of char");
scanf("%c", &ch);


printf("enter the value of num1\n");
scanf("%d%d",&num1,&num2);

printf("the num1 is %d\nAnd the num2 %d\n", num1, num2);





switch (ch)
{
case '+':
   printf("%d + %d = %d", num1, num2, num1 + num2);
    break;


}
    return 0;
}
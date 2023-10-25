#include<stdio.h>

int main(){

int i,n,n3,temp, n1=0, n2=1;

printf("Enter the number how long you want your fibbonacci series : ");
scanf("%d",&n);

printf("%d\t%d\t", n1,n2);
for(i=0;i<=n; i++){

n3=n1+n2;
printf("%d\t",n3);
n1=n2;
n2=n3;
}
    return 0;
}
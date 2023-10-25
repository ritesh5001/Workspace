#include<stdio.h>
int main(){

int arr[6], i, max, min;

for(i=0; i<6; i++){

    scanf("%d", &arr[i]);

}

max=min=arr[0];

for(i=0; i<6; i++){
    if (arr[i]<min){
        min=arr[i];
    }
    if(arr[i]>max){
        max=arr[i];
    }
}

printf("The min is : %d \n The max is : %d ", min,max);

    return 0;
    
}
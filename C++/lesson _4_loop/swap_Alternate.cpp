#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size){
    for (int i = 0; i<size; i+2){
        if (i+1<size ){
            swap(arr[i],arr[i+1]);
        }
    }
}


void printarray(int arr[],int n){
    for (int i=0 ; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){

    int arr[8]= {2,3,4,5,6,7,8,9};
    swapAlternate(arr,8);
    printarray(arr,8);

    return 0;
}
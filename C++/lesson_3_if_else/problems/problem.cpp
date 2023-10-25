#include<iostream>
using namespace std;

void print (int arr[],int n){
cout<<"the numbers of array are : ";
for(int i=0; i<8;i++){
    cout<<arr[i];
}
}
void inputArray( int arr[],int n){
    cout<<"Enter the numbers if the array : ";
    for(int i=0; i<n; i++ ){
        cin>>arr[i];
    }
}

int main(){
    int arr[8],n;
    inputArray(arr,8);
    print(arr,8);

    return 0;
}
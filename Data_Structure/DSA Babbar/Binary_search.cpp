#include<iostream>
using namespace std;

int binarySearch(int arr[8], int size, int key ){

int start = 0;
int end = size-1;
int mid = end + (end-start)/2;

while (start<=end)
{
    if(arr[mid] == key){
        return mid;
    }
    if(key>arr[mid]){
        start = mid +1; 
    }
    else {
        end = mid -1;
    }

        mid = end + (end-start)/2;
}
        return -1;
}

int main(){

int even[6] = {2,3,4,5,6,7};
int odd[7] = { 2, 3, 4, 6, 7, 8, 9};

int evenIndex = binarySearch( even, 6, 3 );
    cout<<evenIndex;


    return 0;
}
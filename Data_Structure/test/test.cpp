#include<iostream>
using namespace std;

int binary_search(int arr[],int size,int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while (start < end){
        if(mid==key){
            return mid;
        }
        else if (mid<key){
            start = mid + 1;
        }
        else if (mid>key){
            end = mid - 1;
        }
        mid = start + (end - start)/2;
        }
        return -1;
    }


int main(){

    int arr[6] = {1,2,3,4,5,6,}
    int index = binary_search(arr,6,2);
    return 0;
}
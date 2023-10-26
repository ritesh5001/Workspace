#include<iostream>
using namespace std;


int getPivot(int arr[],int num){
    
    int start = 0;
    int end = num - 1 ;
    int mid = start + (end - start)/2;

    while ( start < end ){
        if ( arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else {
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}

int main(){

    int arr[5] = {3,4,5,1,2};
    cout<<"pivot is "<<getPivot(arr,5)<<endl;

    return 0;
}
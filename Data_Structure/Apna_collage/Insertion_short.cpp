#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
        // 12, 54, 65, 07, 23, 0
    int key, j;
    for(int i = 1 ; i<n;i++){
        key=arr[i];
        j=i-1;
        while (j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }

        for(int i=0;i<n;i++){
            cout<<arr[i]<<"\t";
        }
    return 0;
}
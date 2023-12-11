#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter the size of the array : ";
    cin>>n;

    int arr[n];
    cout<<"enter the numbers of the array : ";
    for(int o=0;o<n;o++){
        cin>>arr[o];
    }

    // int num=1;
    // while(num<n){
    //     for(int o=0;o<n-num;o++){
    //         if(arr[o]>arr[o+1]){
    //             swap(arr[o],arr[o+1]);
    //         }
    //     }
    //     num++;
    // }

    // cout<<"The shorted array is : ";
    // for(int p=0;p<n;p++){
    //     cout<<arr[p]<<"\t";
    // }

    int num=1;
    while(num<n)
    {
        for(int i=0;i<n-num;i++)
        {
            if(arr[i]>arr[i+1])
            {
                swap(arr[i],arr[i+1]);
            }
        }
        num++;
    }
        cout<<"The shorted array is : ";
    for(int p=0;p<n;p++){
        cout<<arr[p]<<"\t";
    }

    return 0;
}
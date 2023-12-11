#include<iostream>
using namespace std;



int main()
{

    int n;
    cin>>n;
    int arr[n]={1,5,3,4,3,5,6};
    int temp=0;
    for(int i=0;i<n-1;i++)
    {
        
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                temp++;
            }
        }
    }
    cout<<temp;

    return 0;
}
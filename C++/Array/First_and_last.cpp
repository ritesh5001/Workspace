#include <iostream>
using namespace std;

int firstOccurence(int arr[], int size, int key)
{

    int first = 0;
    int end = size - 1;
    int mid = first + (end - first) / 2;
    int ans = -1;

    while (first <= end)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            first = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        mid = first + (end - first) / 2;
    }
    return ans;
}

int lastOccurence(int arr[], int size, int key)
{

    int first = 0;
    int end = size - 1;
    int mid = first + (end - first) / 2;
    int ans = -1;

    while (first <= end)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            first = mid + 1;
        }
        else if (arr[mid] < key)
        {
            first = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }mid = first +(end-first)/2;
    }
    return ans;
}

int main()
{

    int arr[9] = {1, 2, 3, 4, 5, 6, 6, 8, 9};
    
    int firstIndex = firstOccurence(arr,9,6);
    int secondIndex = lastOccurence(arr, 9, 6);
     
     cout<<firstIndex<<endl;
     cout<<secondIndex<<endl;


    return 0;
}
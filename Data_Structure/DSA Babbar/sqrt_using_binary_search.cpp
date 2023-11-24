#include<iostream>
using namespace std;

long long int sqrt(int num){
    int start = 0;
    int end = num; 
    long long int square  = num*num;
    int mid = start + (end - start )/2;
    int ans = -1;


    while(start<end){
        if(square == num){
            return mid;
        }
        else if (square < num){
            ans = mid; 
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
}

int main(){

int r=27;

cout<<sqrt(27);

    return 0;
}
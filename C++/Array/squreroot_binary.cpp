#include<iostream>
using namespace std;

    int sqrt( int number){

        int start = 0;
        int end = number;
        int mid = start + (end-start)/2;
        
        int ans = -1;
        while (start<=end){

            int square = mid*mid;

            if (square == number){
                return mid;
            }
            
            if (square < number){
                ans = mid;
                start = mid+1;
            }

            else {
                end = mid-1;
            }

            mid = start + (end-start)/2;
        }
        return ans;
    }

int main(){

        int number = 49;
        int squreroot = sqrt(49);
        cout<<" The square root of "<<number<<" is : "<<squreroot<<endl;
}
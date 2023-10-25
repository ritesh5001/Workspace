#include <iostream>
using namespace std;
int main()
{

    int i, n, sum = 0;

    cout << " Enter the value of i " << endl;
    cin >> n;

    while (n > 0)
    {
        i = n % 10;
        sum=sum*10+i;
        n=n/10;
    }
         cout<<sum;
    return 0;
}
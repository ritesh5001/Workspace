#include <iostream>
using namespace std;
int main()
{
    int n, r, sum = 0;

    cout << endl
         << endl
         << " Enter the value of n " << endl;
    cin >> n;

    while (n > 0)
    {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }
    cout << endl
         << "The sum is " << sum << endl;
}
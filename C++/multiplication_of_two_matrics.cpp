#include <iostream>
using namespace std;

int main()
{

    int mat1[3][3], mat2[3][3], mat3[3][3], i, j;

    cout << "Enter the numbers 1st matrics : ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> mat1[i][j];
        }
    }
    cout << "Enter the numbers of 2nd matrics : ";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> mat2[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mat3[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                mat3[i][j] = mat3[i][j] + mat1[i][k] * mat2[k][j];
            }
        }
    }
    cout << "The multiplication is \n\n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "\t";
            cout << mat3[i][j];
        }
        cout << "\n";
    }

    return 0;
}
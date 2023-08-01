#include <iostream>
using namespace std;

void multiplyMatrices(int mat1[2][2], int mat2[2][2], int result[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main()
{
    int mat1[2][2];
    int mat2[2][2];
    int result[2][2];

    cout << "Enter the elements of the first matrix (2x2):\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter the elements of the second matrix (2x2):\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> mat2[i][j];
        }
    }

    multiplyMatrices(mat1, mat2, result);

    cout << "Resultant matrix after multiplication:\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


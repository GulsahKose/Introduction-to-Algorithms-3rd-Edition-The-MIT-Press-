#include <iostream>
#include <iomanip>

using namespace std;

void printMatris( int[][2], int);
void sum(int [][2], int [][2], int);
void subtraction(int [][2], int [][2], int);

int main()
{
    //Page:76,  Section:4.2

    const int n = 2;

    int matris1[n][n] = { {1,2}, {1,2} };
    int matris2[n][n] = { {2,4}, {5,6} };

    sum(matris1, matris2, n);
    subtraction(matris1, matris2, n);
 
    return 0;
}

void printMatris( int matris[][2], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cout << setw(4) << matris[i][j];
        cout << endl;
    }

    cout << endl;
}

void sum(int m1[][2], int m2[][2], int n)
{
    int result[2][2];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            result[i][j] = m1[i][j] + m2[i][j];

    cout << "Result of sum: " << endl;
    printMatris(result, 2);
}

void subtraction(int m1[][2], int m2[][2], int n)
{
    int result[2][2];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            result[i][j] = m1[i][j] - m2[i][j];

    cout << "Result of subtraction: " << endl;
    printMatris(result, 2);
}


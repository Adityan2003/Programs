#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int a[n][m];

    // matrix input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    // matrix output
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    // matrix transpose
    for (int row = 0; row < n; row++)
    {
        for (int col = row + 1; col < m; col++)
        {
            swap(a[row][col], a[col][row]);
        }
    }

    cout << "\n";

    // matrix output
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}
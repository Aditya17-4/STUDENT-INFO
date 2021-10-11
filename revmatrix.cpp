#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cin >> r;
    c = r;
    int arr[r][c];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = c; i > 0; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = c - 1; j >= 0; j--)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}
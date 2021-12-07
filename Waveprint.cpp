
#include <iostream>
using namespace std;

void wavePrint(int **input, int nRows, int mCols)
{
    for(int col = 0;col<mCols; col++)
    {
        if(col%2==0)
        {
            for(int row = 0;row <nRows;row++)
            {
                cout << input[row][col] << " ";
            }
        }
        else
        {
            for(int row = nRows-1;row >=0;row--)
            {
                cout << input[row][col]<< " ";
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int row, col;
        cin >> row >> col;
        int **input = new int *[row];
        for (int i = 0; i < row; i++)
        {
            input[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> input[i][j];
            }
        }
        wavePrint(input, row, col);
        cout << endl;
    }
}
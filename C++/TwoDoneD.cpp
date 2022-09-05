#include <iostream>
using namespace std;

void crtArray(int** dt)
{
    
}
void fillArray(int** dt, int r, int c[] )
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c[i]; j++)
        {
            chk:
            cout << "Please Enter a Positive number for row # " << i + 1 << " at column # " << j + 1 << " :: ";
            cin >> dt[i][j];
            if (dt[i][j] < 0)
                goto chk;
        }
    }
}

int* twoDimToOneDim(int** dt, int r, int c[])
{
    int t = 0;
    for (int s = 0; s < r; s++)
    {
        t += c[s];
    }
    int *oneArr = new int[t];
    int index = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c[i]; j++)
        {
            oneArr[index++] = dt[i][j];
        }
    }
    return oneArr;
}
int* SortArr(int* ar, int t)
{
    int temp;
    for (int i = 0; i < t; i++)
    {
        for (int j = i + 1; j < t; j++)
        {
            if (ar[i] > ar[j])
            {
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    return ar;
}
void showArr(int* ar, int t)
{
    cout << "\nSorted Array :: ";
    for (int i = 0; i < t; i++)
    {
        cout << "\t" << ar[i];
    }
}
int main()
{
    cout << "Hello World!\n";
    int** array{ new int* }; // these are rows 10.
    int rows = 1;
    cout << "\nEnter Number of Rows :: ";
    cin >> rows;
    int cols[20];
    int t = 0;
    for (int i = 0; i < rows; i++)
    {
        cout << "\nEnter No of Columns for Row # " << i + 1 << " :: ";
        cin >> cols[i];
        array[i] = new int[cols[i]];
        t += cols[i];
    }
    
    fillArray(array, rows, cols);
    int* arr = twoDimToOneDim(array, rows, cols);
    int* ar = SortArr(arr, t);
    showArr(ar, t);
    return 0;
}



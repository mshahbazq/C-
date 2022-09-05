#include <iostream>
using namespace std;
int countMostlyWhite(int  data[][1000], int m, int n, int k)
{
	int mwl = (k * k) / 2;
	int wc = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (data[i][j] == 1)
			{
				wc++;
			}
		}
		if (mwl <= wc)
		{
			cout << "Number of Mostly White Sub Matrices of size k * k are :: " << wc;
		}
		cout << data[0][i];
	}
	return 0;
}
int main()
{
	
	int  arr[10][1000] = { {0, 0, 1}, {1, 1, 1} , {1,1,0} };
	cout << countMostlyWhite(arr, 3, 3, 2);
	return 0;
}
#include <iostream>
using namespace std;
int countMostlyWhite(int data[][10], int m, int n, int k)
{
	int mw = (k * k) / 2;
	int wc = 0;
	int w = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			for (int i2 = i; i2 <= k; i2++) {
				for (int j2 = j; j2 <= j; j2++) {
					if (data[i2][j2] == 1) {
						wc++;

					}
				}
				if (wc >= mw) {
					w = wc;
				}
			}
			wc = 0;
		}

	}
	return w;

}
int main()
{
	int k = 3;
	int data[10][10] = {
							{0, 0, 1, 0},
	{0, 1, 0, 1}, 
	{0, 0, 0, 1}, 
	{1, 0, 1, 0}, 
	{0, 1, 1, 1}, };
	cout << countMostlyWhite(data, 5, 4, k);
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int *arr = (int*) malloc(4 * sizeof(int));
	arr[0] = 12;
	arr[1] = 21;
	arr[2] = 45;
	arr[3] = 54;
	arr[4] = 56;
	arr[5] = 47;
	cout << *arr << endl;
	cout << *(arr + 1) << endl; // arr[1] == *(arr + 1)
	cout << *(arr + 2) << endl;
	cout << *(arr + 3) << endl;
	cout << *(arr + 4) << endl;
	cout << arr[5];
	cout << endl << arr << endl << &arr[0]; // &arr[2] == arr + 2;
	return 0;
}

#include<iostream>
using namespace std;

int findmode(int *arr, int size)
{
	int count = 0;
	int precount = 0;
	int mode;
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
		{
			if(arr[i] == arr[j] && i != j)
			{
				count++;
			}
		}
		if(count > precount)
		{
			precount = count;
			mode = arr[i];
		}
	}
	return mode;
}
int main()
{
	int arr[11] = {12, 3, 12, 3, 4, 5, 12, 6, 7, 89, 12};
	
	cout << findmode(arr, 11);
	return 0;
}

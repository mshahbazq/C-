#include<iostream>
#include<ctime>
using namespace std;

void initArray(int *arr)
{
	srand((unsigned) time(NULL));
	for(int i = 0; i < 20; i++)
	{
		*(arr + i) = rand() % 99;
	}
}
void printArray(int *arr)
{
	
	cout << "\nArray :: ";
	for(int i = 0; i < 20; i ++)
	{
		cout << *(arr + i) << " ";
	}
}
int swap(int *num1, int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
	
}
int sortArray(int *arr)
{
	int c = 0, swapFlag = 0;
	do
	{
		swapFlag = 0;
		for(int i = 0; i < 19; i++)
		{
			if(*(arr + i) < *(arr + i + 1))
			{
				swap((arr + i), (arr + i + 1));
				swapFlag = 1;
			}
		}
		cout << "\nIteration Number :: " << ++c;
		printArray(arr);
	}while(swapFlag != 0);
}
int main()
{

	
	int arr[20];
	
	initArray(arr);
	cout << "\n\n +++++++++++++++++Array ++++++++++++++++++++++++++";
	printArray(arr);
	
	sortArray(arr);
	
	cout << "\n\n ++++++++++++++++++Sorted Array++++++++++++++++++";
	printArray(arr);
	
	return 0;
}

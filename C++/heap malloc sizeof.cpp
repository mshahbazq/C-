
#include<iostream>
using namespace std;
int main1()
{
	int *p = (int*)malloc(sizeof(int));
	*p = 17;
	cout << p << endl;
	cout << *p;
	// makes free the memory block of *p;
	free(p);
	*p = 12;
	cout << endl << *p;
	cout << endl << p;
}
int main()
{
	int *p = (int*) malloc(sizeof(int));
	*p = 30;
	int *q = p;
	
	cout << p << endl << q;
	cout << endl << *p << endl << *q;
	
	free(q);
	cout << "\n+++++++++free(p)+++++++++";
	cout << endl << *p << endl << *q;
	cout << endl << p << endl << q;
	// cause not to free 
//	free(q);
//	cout << "\n+++++++++free(q)+++++++++";
//	cout << endl << *p << endl << *q;
//	cout << endl << p << endl << q;
	return 0;
}

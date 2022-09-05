#include<iostream>
using namespace std;

// 1.0
//int main()
//{
//	// integers takes 4 bytes.
//	int i = 42, j = 107;
//	
//	// pointers takes 8 bytes... & -- address-of
//	// & on int gives int *
//	int *p = &i; // p storing address-of i.
//	int *q = &j; // q storing address-of j.
//	
//	// prints addresses of 'i' and 'j'
//	cout << p << endl << q << endl;
//	
//	// prints the values stored at pointers contents'
//	// * -- dereference :: * on int gives int
//	cout << *p << endl << *q;
//	
//	// exercise 1.0
//	
//	// 1.0.1
//	cout << "\n =========Work======== \n";
//	// This makes p and q has 'aliases' means they points to smae address.
////	p = q;
////	cout << p;
////	cout << endl << p << endl << q;
////	cout << endl << *p << endl << *q;
//	
//	// 1.0.2
//	cout << "\n =========Work======== \n";
//	// dereference the p and change the content to content of *q. 
////	*p = *q;
////	cout << p << endl << q;
////	cout << endl << *p << endl << *q;
//	
//	// 1.0.3
//	cout << "\n =========Error======== \n";
//	// try to store address of memory-block to the int.
//	//*p = q; segmentation fault.
//	
//	// 1.0.4
//	cout << "\n =========Error======== \n";
//	// p = *q; try to store int to pointer's int. segmentation fault.
//	
////	cout << p;
////	cout << *p;
//	return 0;
//}

int main()
{
//	int i;
//	int *p;
//	
//	// unpredictable no crash
//	cout << i << endl;
//	
//	// probably a crash
//	cout << *p;
//	
//	// pointer to null value.
//	int *q = NULL;
//	//cout << *q;
//	
//	// check if pointer is NULL.
//	if (q == NULL)
//		cout << "NULL TRUE";
//	
	int k = 5;
	double d = 2.5;
	
	int *ip = &k;
	double *dp = &d;
	
	// dp = ip; error
	//*dp = *ip; work
//	*ip = *dp; // work 
	
	cout << endl << dp << endl << ip;
	cout << endl << *dp << endl << *ip;
	
	cout << endl << sizeof(dp) << endl << sizeof(ip);
	
	return 0;
}

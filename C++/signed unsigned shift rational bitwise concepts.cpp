#include <iostream>
using namespace std;

int main()
{
	bool b = -13 < 130;
	
	if(b) cout << "True" << endl;
	
	cout << b;
	
	unsigned int a = 12;
	cout << endl << sizeof(a);
	
	unsigned char c1 = 65, c2 = 90;
	cout << endl << sizeof(c1) << endl << c1 << endl << c2;
	
	cout << endl << "++++++&+++++++ \n" << (char)(c1 & c2) << "\t" << (c1 & c2);
	cout << endl << "++++++|+++++++ \n" << (char)(c1 | c2) << "\t" << (c1 | c2);
	cout << endl << "++++++^+++++++ \n" << (char)(c1 ^ c2) << "\t" << (c1 ^ c2);
	cout << endl << "++++++~+++++++ \n" << (char)(~c2) << "\t" << (~c1);
	cout << endl << "++++++<<+++++++ \n" << (char)(c1 << 2) << "\t" << (c1 << 2);
	cout << endl << "+++++++>>++++++ \n" << (char)(c1 >> 2) << "\t" << (c1 >> 2);
	
	unsigned char uch;
	signed char sch;
	uch = 250;
	
	cout << endl << "+++++++uch = 250++++++\n" << (uch);
	sch = uch;
	cout << endl << "+++++++++sch = uch +++++++++++\n" << (sch);
	
	float t = 1e12;
	cout<< "\n==============Trillion============\n" << t;
	cout << endl << (t + 1000 - t);
	cout << endl << (t - t + 1000);
	float f = 0.2;
	cout << endl << f;
	
	return 0;
}

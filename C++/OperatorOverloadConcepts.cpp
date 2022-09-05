#include<iostream>
using namespace std;

class Cordinates
{
	private:
		int x;
		int y;
		
		
	public:
		// 1. Constructor with no arguments.
		Cordinates(): x(0), y(0) { }
		
		// 2. Constructor with 2 arguments.
		Cordinates(int X, int Y)
		{
			x = X;
			y = Y;
		}
		
		// 3. Constructor with 1 argument
		Cordinates(int X)
		{
			x = X;
			y = 0;
		}
		
		void display()
		{
			cout << x;
			cout << endl << y; 
		}
		
		// overloading + operator
		Cordinates operator + (Cordinates A)
		{
			// Creating Temporary Object.
			Cordinates T;
			T.x = x + A.x;
			T.y = y + T.y;
			return T;
		}
		
		// overloading - operator
		Cordinates operator - (Cordinates A)
		{
			// Creating Temporary Object.
			Cordinates T;
			T.x = x - A.x;
			T.y = y - A.y;
			return T;
		}
		// Same applies for *, / operators.
};


int main()
{
	Cordinates C1(5);
	C1.display();
	
	cout << endl;
	
	Cordinates C2(10, 15);
	C2.display();
	
	Cordinates C3;
	
	// + operator is overloaded. C1 is passed as argument and C2 is used as self.
	C3 = C2 + C1;
	
	cout << endl;
	
	C3.display();
	
	// 1 operator is overloaded. C1 is passed as argument and C2 is used as self.
	C3 = C3 - C2;
	cout << endl;
	C3.display();
	return 0;
}

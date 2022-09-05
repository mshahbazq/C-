#include<iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cout << "enter :: ";
	getline(cin, s);
	cout << endl << s;
/**	ifstream inFile;
	inFile.open("Teachers.txt");
	if(!inFile)
	{
		cout << "Unable to open file.";
		exit(1);
	}
	string s;
	
	getline(inFile, s);
	//cout << s;
	
	string ss, sss;
	stringstream ch(s);
	int c = 0;
	int arr[3], arrIndex = 0;
	while(getline(ch, ss, ','))
	{
		switch(++c)
		{
			case 9:
				{
					stringstream chh(ss);
					while(getline(chh, sss, '|'))
						cout << sss << endl;
					break;
				}
				
			case 10:
				{
					stringstream chhh(ss);
					while(getline(chhh, sss, '|'))
						cout << sss << endl;
						arr[arrIndex++] = (int)sss;
					break;
				}
				
		}
		cout << ss << endl;
			
	}
	
*/	
	return 0;
}

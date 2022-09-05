#include<iostream>
#include<string.h>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int nWords = 0;
	string str;
	cout << "Enter text :: ";
	getline(cin, str);
	stringstream s(str);
	string w, iw;
	while(s >> w)
	{
		nWords++;
		
	}
	string sArr[nWords];
	int index = 0;
	while(getline(s, iw, ' '))
	{
		sArr[index++] = iw;
	}
	cout << "\n\n\n================Entered Text===================\n\n\n";
	for(int i = 0; i < nWords; i++ )
	{
		cout << sArr[i] << " ";
	}
	
//	char **tdPtr[2][2] = {{odPtr}};
//	
//	cout << tdPtr[0][0][0] << endl;
//	cout << tdPtr[0][0][1];	
//	
//	string s = cPtr;
//	cout << "\n" << cPtr[0];
	return 0;
}

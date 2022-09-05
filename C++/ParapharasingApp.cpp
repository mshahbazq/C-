#include<iostream>
#include<string.h>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int sum = 0;
	int x;
	string s;
	ifstream inFile;
	
	inFile.open("Pfile.txt");

	if(!inFile)
	{
		cout << "Unable to open file";
		exit(1); // terminate with error
	}
	
	string inStr;
	cout << "Enter the Text :: ";
	getline(cin, inStr);
	stringstream ss(inStr);
	int nWords = 0;
	
	while(ss >> s)
	{
		nWords++;	
	}
	
	stringstream sch(inStr);
	
	string sodArr[nWords];
	string w;
	int index = 0;
	while(getline(sch, w, ' '))
	{
		sodArr[index++] = w;
	}
	system("CLS");
	cout << "\n\n\n\n ===============Entered Text=============== \n";
	
	for(int i = 0; i < nWords; i++)
	{
		cout << sodArr[i] << " ";
	}
	
	string stdArr[100][100];
	int r = 0, c;
	string wrd;
	
	while(getline(inFile, wrd))
	{
		stringstream check(wrd);
		string intrm;
		c = 0;
		while(getline(check, intrm, ' '))
		{
			stdArr[r][c++] = intrm;
		}
		r++;
		int random;
		for(int i = 0; i < nWords; i++)
		{
			for(int k = 0; k < r; k++)
			{
				for(int j = 0; j < c; j++)
				{
					if(stdArr[k][j] == sodArr[i])
					{
						again:
						random = 0 + (rand() % c);
						if(random == j)
							goto again;
						sodArr[i] = stdArr[k][random];	
					}
				}
			}
		}
	}
	
	cout << "\n\n\n\n ===============Parapharased Text=============== \n";
	
	for(int i = 0; i < nWords; i++)
	{
		cout << sodArr[i] << " ";
	}
	
	inFile.close();

	return 0;
}

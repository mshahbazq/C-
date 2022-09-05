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
	
	//string line = "GeeksForGeeks is a must try";
     
    // Vector of string to save tokens
    string inStr;
    cout << "Enter the text to parapharase :: ";
    getline(cin, inStr);
    vector <string> tokens;
    stringstream check1(inStr);
    while(getline(check1, s, ' '))
    {
    	tokens.push_back(s);
   	
	}
	
	cout << "\n\n\n ===============Entered Text=============== \n";
	
	for(int i = 0; i < tokens.size(); i++)
	{
		cout << tokens[i] << " ";
	}
    
    
	string str[10][10];
	
	int r = 0, c;
	while(getline(inFile, s))
	{
	    stringstream check1(s);
	    string intermediate;
	    c = 0;
	    while(getline(check1, intermediate, ' '))
	    {
	    	str[r][c++] = intermediate;
	    }
	    r++;
	    int random;
	    for(int i = 0; i < tokens.size(); i++)
		{
			for(int k = 0; k < r; k++)
			{
				for(int j = 0; j < c; j++)
				{
					if(str[k][j] == tokens[i])
					{
						again:
						random = 0 + (rand() % c);
						if(random == j)
							goto again;
						tokens[i] = str[k][random];	
					}
				}
			}
		}
	}
	
	cout << "\n\n\n\n ===============Parapharased Text=============== \n";
	
	for(int i = 0; i < tokens.size(); i++)
	{
		cout << tokens[i] << " ";
	}
	
	inFile.close();

	return 0;
}

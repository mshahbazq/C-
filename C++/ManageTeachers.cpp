#include<iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;
class Teacher
{
	private:
		// Attributes or data-members.
		string name;
		string address;
		string contactInfo;
		string emailAddress;
		string institution;
		string department;
		char type;
		string designation;
		string allocatedCourses[10];
		int creditHours[10];
		int creditHoursPerWeek;
		int monthlySalary;
		int experience;
		int publications;
		string qualification;
		
	public:
		//
		
		// Setters
		void setName(string n)
		{
			name = n;
		}
		void setAddress(string a)
		{
			address = a;
		}
		void setContactInfo(string c)
		{
			contactInfo = c;
		}
		void setEmailAddress(string e)
		{
			emailAddress = e;
		}
		void setInstitution(string i)
		{
			institution = i;
		}
		void setDepartment(string d)
		{
			department = d; 
		}
		void setType(char t)
		{
			type = t;
		}
		void setDesignation(string d)
		{
			designation = d;
		}
		void setAllocatedCourses(string* ac, int count)
		{
			for(int i = 0; i < count; i++)
			{
				allocatedCourses[i] = ac[i];
			}
		}
		void setCreditHours(int *ch, int count)
		{
			creditHoursPerWeek = 0;
			for(int i = 0; i < count; i++)
			{
				creditHours[i] = ch[i];
				creditHoursPerWeek += ch[i];
			}	
		}
		// calculate salary member function
		void calculateSalary()
		{
			int salary = 0;
			if(type == 'v')
			{
				if(designation == "Lecturer" || designation == "lecturer")
				{
					salary = 2000;
					monthlySalary = salary * creditHoursPerWeek;
					
				}
				else if(designation == "Assistant Professor" || designation == "assistant professor")
				{
					salary = 4000;
					monthlySalary = salary * creditHoursPerWeek;
				
				}
				else if(designation == "Associate Professor" || designation == "associate professor")
				{
					salary = 7000;
					monthlySalary = salary * creditHoursPerWeek;
				}
				else if(designation == "Professor" || designation == "professor")
				{
					salary = 9000;
					monthlySalary = salary * creditHoursPerWeek;
				}
								
			}
			else if(type = 'p')
			{
				if(designation == "Lecturer" || designation == "lecturer")
				{
					monthlySalary = 100000;
				}
				else if(designation == "Assistant Professor" || designation == "assistant professor")
				{
					monthlySalary = 175000;
				}
				else if(designation == "Associate Professor" || designation == "associate professor")
				{
					monthlySalary = 250000;
				}
				else if(designation == "Professor" || designation == "professor")
				{
					monthlySalary = 325000;
				}
			}
		}
		void setExperience(int e)
		{
			experience = e;
			if(experience == 1)
			{
				monthlySalary = monthlySalary + (monthlySalary * 0.05);
			}
			else if(experience == 2)
			{
				monthlySalary = monthlySalary + (monthlySalary * 0.10);
			}
			else if(experience == 3)
			{
				monthlySalary = monthlySalary + (monthlySalary * 0.15);
			}
			else if(experience == 4)
			{
				monthlySalary = monthlySalary + (monthlySalary * 0.20);
			}
		}
		void setPublications(int p)
		{
			publications = p;
			monthlySalary = monthlySalary + (8000 * publications);
		}
		void setQualification(string q)
		{
			qualification = q;
		}
		
		// Getters
		string getName()
		{
			return name;
		}
		string getAddress()
		{
			return address;
		}
		string getContactInfo()
		{
			return contactInfo;
		}
		string getEmailAddress()
		{
			return emailAddress;
		}
		string getInstitution()
		{
			return institution;
		}
		string getDepartment()
		{
			return department;
		}
		char getType()
		{
			return type;
		}
		string getDesignation()
		{
			return designation;
		}
		string* getAllocatedCourses()
		{
			return allocatedCourses;
		}
		int* getCreditHours()
		{
			return creditHours;
		}
		int getCreditHoursPerWeek()
		{
			return creditHoursPerWeek;
		}
		int getMonthlySalary()
		{
			calculateSalary();
			setExperience(getExperience());
			setPublications(getPublications());
			return monthlySalary;
		}
		int getExperience()
		{
			return experience;
		}
		int getPublications()
		{
			return publications;
		}
		string getQualification()
		{
			return qualification;
		}
		
		// member function showData
		void showData()
		{
			cout << "\nName :: " << getName();
			cout << "\nAddress :: " << getAddress();
			cout << "\nContact :: " << getContactInfo();
			cout << "\nEmail :: " << getEmailAddress();
			cout << "\nInstitution :: " << getInstitution();
			cout << "\nDepartment :: " << getDepartment();
			cout << "\nType(P->Permanent || V->Visiting) :: " << getType();
			cout << "\nDesignation :: " << getDesignation();
			
			cout << "\n\t\t::Allocated Courses :: ";
			int i = 0;
			string* sPtr = getAllocatedCourses();
			int* iPtr = getCreditHours();
			while( sPtr[i] != "")
			{
				cout << "\n\t\tCourse :: " << sPtr[i] << " Credit Hours :: " << iPtr[i++] ;
			}
			
			cout << "\nCredit Hours Per Week :: " << getCreditHoursPerWeek();
			cout << "\nMonthly Salary :: " << getMonthlySalary();
			cout << "\nExperience :: " << getExperience();
			cout << "\nPublication :: " << getPublications();
			cout << "\nQualification :: " << getQualification();
		}
		// member function updateRecord
		void updateRecord()
		{
			int choose;
			cout << "\nEnter 1 to update qualification";
			cout << "\nEnter 2 to update contact";
			cout << "\nEnter 3 to update institution";
			string s;
			cin >> choose;
			
			if(choose == 1)
			{
				cout << "\nPlease Enter Qualification [Master, doctorate, post-doctorate] :: ";
				cin.ignore();
				getline(cin, s);
				setQualification(s);	
			}
			else if(choose == 2)
			{
				cout << "\nPlease Enter Contact :: ";
				cin.ignore();
				getline(cin, s);
				setContactInfo(s);
			}
			else if(choose == 3)
			{
				cout << "\nPlease Enter Institution :: ";
				cin.ignore();
				getline(cin, s);
				setInstitution(s);
			}
			else
			{
				cout << "\nInvalid Input.";
			}
		}
};


int main()
{
	Teacher t1, t2, t3, t4, t5;	
	Teacher tArr[5] = {t1, t2, t3, t4, t5};
	
	ifstream inFile;
	inFile.open("Teachers.txt");
	
	if(!inFile)
	{
		cout << "Unable to open file";
		exit(1); // terminate with error
	}
	string s;
	stringstream ch;
	string intermediate;
	int count;
	int indexCourse, indexCH;
	string cArr[10];
	int chArr[10];
	//stringstream c;
	string intermediate2;
	//stringstream cc;
	string intermediate22;
	for(int index = 0; index < 5; index++)
	{
		// string s;
		getline(inFile, s);
		//stringstream ch(s);
		stringstream ch(s);
		
		//string intermediate;
		count = 0;
		indexCourse = 0, indexCH = 0;
		
		while(getline(ch, intermediate, ','))
		{
			switch(++count)
			{
				case 1:
					{
						tArr[index].setName(intermediate);
						break;
					}
					
				case 2:
					{
						tArr[index].setAddress(intermediate);
						break;	
					}
					
				case 3:
					{
						tArr[index].setContactInfo(intermediate);
						break;
	
					}
				case 4:
					{
						tArr[index].setEmailAddress(intermediate);
						break;
					}
					
				case 5:
					{
						tArr[index].setInstitution(intermediate);
						break;	
					}
					
				case 6:
					{
						tArr[index].setDepartment(intermediate);
						break;	
					}
					
				case 7:
					{
						tArr[index].setType('p');
						break;	
					}
					
				case 8:
					{
						tArr[index].setDesignation(intermediate);
						break;	
					}
					
				case 9:
					{
						stringstream c(intermediate);
					
						while(getline(c, intermediate2, '|'))
						{
							cArr[indexCourse++] = intermediate2;
						}
						tArr[index].setAllocatedCourses( cArr , indexCourse);
						break;
					}
					
				case 10:
					{
						stringstream cc(intermediate);
						while(getline(cc, intermediate22, '|'))
						{
							chArr[indexCH++] = stoi(intermediate22);
						}
						tArr[index].setCreditHours(chArr, indexCH);
						break;
					}
				case 11:
					{
						tArr[index].setExperience(stoi(intermediate));
						break;	
					}
					
				case 12:
					{
						tArr[index].setPublications(stoi(intermediate));
						break;	
					}
					
				case 13:
					{
						tArr[index].setQualification(intermediate);
						break;	
					}
					
			}
			
			
		}
	}
	
	cout << "\nReading data from text file is .....done.";
	
	
	fstream SalaryFile("SaveTeachersSalary.txt");
	for(int i = 0; i < 5; i++)
	{
		// calculate salary of each object and save it to text file.
		SalaryFile << tArr[i].getName() + "," + to_string(tArr[i].getMonthlySalary()) + "\n";
		cout << "\nCalculating and Saving salary for object " << i+1 << " is .....done.";
		// call update for 2nd and 3rd objects
		if(i == 1 || i == 2)
		{
			cout << "\n\nUpdating Information for object " << i+1 << ".....";
			cout << "\nCurrent Information is for object " << i+1 << " as following.";
			cout << "\nQualification :: " << tArr[i].getQualification();
			cout << "\nContact :: " << tArr[i].getContactInfo();
			cout << "\nInstitution :: " << tArr[i].getInstitution();
			
			tArr[i].updateRecord();
		}
	}

	SalaryFile.close();
	inFile.close();
	
	// Show data of each object
	for(int i = 0; i < 5; i++)
	{
		cout << "\n++++++++++++++++++Data for object " << i+1 << " +++++++++++++++++++++++++";
		tArr[i].showData();
	}
	return 0;
	
}

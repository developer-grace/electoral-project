#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

//create a file for the voter's data
int voterdata_file()
{
	ofstream voterdata;
	voterdata.open("Voter Data Base.txt");
	if (!voterdata)
	{
		cout << "file not created";
	}
	else
	{
		cout << "file created successfully!";
		voterdata << "Voter Data Base\n";
		voterdata << setw(15) << "Voter ID" << setw(15) << "Name" << setw(15)<< "Age" << setw(15)<<"Suburb" << setw(15)<< "Status" << endl;
		voterdata <<  setw(15) << 12345678 << setw(15) << "Tommy Sauche" << setw(15) << "23" << setw(15)<< "Carlton" << setw(15)<< "Student" << endl;
	}
	voterdata.close();
	return 0;
}

//create a file for the candidate's data
int candidatedata_file()
{
ofstream candidatedata;
	candidatedata.open("candidatedata.txt");
	if (!candidatedata)
	{
		cout << "file not created";
	}
	else
	{
		cout << "file created successfully!";
		candidatedata << "Candidate Data Base\n";
		candidatedata << "Party" << "Name" << "Age" << "District" << "Count" << endl;
		candidatedata << "Greens" << "Jane Goodie" <<
		candidatedata << "Liberal" << "Harry Badgoi" << 45 << "Brighton" << "" << endl;
	}
	candidatedata.close();
	return 0;
}

int main()
{
	int menu;
	cout << "Please enter your choice: ";
	cout << "Enter P - Print numbers for a particular candidate\n";
	cout << "Enter A - Add number of votes to a candidate\n";
	cout << "Enter S - Display the smallest number of votes candidate\n";
	cout << "Enter L - Display the largest number of votes candidate\n";
	cout << "Enter Q - Quit";
	cin >> menu;

	switch (menu)
	{
	case 1:
		voterdata_file();
			char data[100];
		// opening a file in write mode.
			cout << "Writing to the file" << endl;
			cout << "Please enter your Voter ID: ";
			cin.getline(data, 100);
			voterdata << "Please enter your name:";
			voterdata << data << endl;
			cout << "Enter your age: "; cin >> data;
			cin.ignore();
			voterdata << "Your Age is:";
			voterdata << data << endl;

	// close the opened file.
	voterdata.close();
	
				/*string line;
				ifstream voterdata("voterdata.txt");
				if (voterdata.is_open())
				{
					while (getline(voterdata, line))
					{
						cout << line << '\n';
					}
					voterdata.close();
				}
				else cout << "Unable to open file";*/
		break;
	case 2:
		candidatedata_file();
			string line;
			ifstream candidatedata("candidatedata.txt");
			if (candidatedata.is_open())
			{
				while (getline(candidatedata, line))
				{
					cout << line << '\n';
				}
				candidatedata.close();
			}
			else cout << "Unable to open file";
		break;
	case 3:
		print_student_file();
		break;
	case 4:
		print_staff_file();
		break;
	case 5:
		cout << "Quit";
		break;
	}

return 0
}


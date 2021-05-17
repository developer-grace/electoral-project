#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

int voterdata_file()
{
	ofstream voterdata;
	voterdata.open("candidatedata.txt");
	if (!voterdata)
	{
		cout << "file not created";
	}
	else
	{
		cout << "file created successfully!";
		voterdata << "Symbol\n" << "Name\n" << "Age\n" << "Suburb\n" << "Count\n" << endl;
	}
	voterdata.close();
	return 0;
}


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
		candidatedata << "Symbol\n" << "Name\n" << "Age\n" << "Suburb\n" << "Count\n" << endl;
	}
	candidatedata.close();
	return 0;
}

int main()
{
	string line;
	ifstream voterdata("input1.txt");
	if (voterdata.is_open())
	{
		while (getline(voterdata, line))
		{
			cout << line << '\n';
		}
		voterdata.close();
	}
	else cout << "Unable to open file";

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
		break;
	case 2:
		candidatedata_file();
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

		
char data[100];
		// opening a file in write mode.
	cout << "Writing to the file" << endl;
	cout << "Enter your name: ";
	cin.getline(data, 100);
	voterdata << "Your Name is:";
	voterdata << data << endl;
	cout << "Enter your age: "; cin >> data;
	cin.ignore();
	voterdata << "Your Age is:";
	voterdata << data << endl;

	// close the opened file.
	voterdata.close();

return 0
}
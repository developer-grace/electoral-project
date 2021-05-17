#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

int voterdata_file()
{
	ofstream voterdata;
	voterdata.open("Voter Data Base.txt");
	if (!voterdata)
	{
		cout << "File not created";
	}
	else
	{
		cout << "File created successfully!";
		voterdata << "Voter Data Base\n";
		voterdata << setw(15) << "Voter ID" << setw(15) << "Name" << setw(15) << "Age" << setw(15) << "Suburb" << setw(15) << "Status" << endl;
		voterdata << setw(15) << 12345678 << setw(15) << "Tommy Sauche" << setw(15) << "23" << setw(15) << "Carlton" << setw(15) << "Student" << endl;
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
		cout << "File not created";
	}
	else
	{
		cout << "File created successfully!\n";
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
	else cout << "Unable to open file\n";


// Taking in selection as a string, as the options are in alphabet letters
	string menu;
	cout << "Please enter your choice: \n";
	cout << "Enter P - Print numbers for a particular candidate\n";
	cout << "Enter A - Add number of votes to a candidate\n";
	cout << "Enter S - Display the candidate with the smallest number of votes\n";
	cout << "Enter L - Display the candidate with the largest number of votes\n";
	cout << "Enter Q - Quit";
	cin >> menu;

// Using if-else-if statement to accommodate upper/lowercase options

	if (menu == "p" || menu == "P") {
		voterdata_file();
		cout << "Writing to the Voter file" << endl;
		// cout << "Please enter your Voter ID: "; cin>> id
		// cin.getline(id, 100);
		// voterdata << id <<"\t";
		// cout << "Please enter your name: "; cin >> name;
		// cin.getline(name, 100);
		// voterdata << name << "\t";
		// cout << "Please enter your age:"; cin >> age;
		// cin.getline(age, 100); cin >> age;
		// voterdata << age << "\t";
		// cin.ignore();

		
		
	}
	else if (menu == "a" || menu == "A") {
		candidatedata_file();
		cout << "Writing to the Candidate file" << endl;
		// cout << "Please enter your Party: "; cin >> party
		// 	cin.getline(party, 100);
		// voterdata << id << "\t";
		// cout << "Please enter your name: "; cin >> name;
		// cin.getline(name, 100);
		// voterdata << name << "\t";
		// cout << "Please enter your age:"; cin >> age;
		// cin.getline(age, 100); cin >> age;
		// voterdata << age << "\t";
		// cin.ignore();
		
	}
	else if (menu == "s" || menu == "S") {
		// write code here 
		cout << "testing option S";
	}
	else if (menu == "l" || menu == "L") {
		// write code here 
		cout << "testing option L";
	}
	else if (menu == "q" || menu == "Q") {
		cout << "Quit\n" << endl; 
	}
	else {
		cout << "Unknown selection, please try again.";
		// Calling main function to go back to list of selections 
		main();
	}
	
return 0;
}
//string line;
//		ifstream candidatedata("candidatedata.txt");
//		if (candidatedata.is_open())
//		{
//			while (getline(candidatedata, line))
//			{
//				cout << line << '\n';
//			}
//			candidatedata.close();
//		}
//		else cout << "Unable to open file";
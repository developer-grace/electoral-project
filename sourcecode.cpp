#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

int voterdata_file() // Creating file and writing into voter database
{
	ofstream voterdata;
	voterdata.open("VoterDatabase.txt");
	if (!voterdata)
	{
		cout << "File not created";
	}
	else
	{
		cout << "Voter Database created successfully!\n";
		voterdata << "Voter Data Base\n";
		voterdata << "Voter ID\t\t" << "Name\t\t\t" << "Age\t\t" << "Suburb\t\t\t" << "Occupation" << endl;
		voterdata << "123456789\t\t" << "Tommy Sauche\t\t" << "23\t\t" << "Carlton\t\t\t" << "Student" << endl;
		voterdata << "024681357\t\t" << "Katie Hope\t\t" << "62\t\t" << "Mordialloc\t\t\t" << "Doctor" << endl;
		//voterdata << setw(15) << "Voter ID" << setw(15) << "Name" << setw(15) << "Age" << setw(15) << "Suburb" << setw(15) << "Status" << endl;
		//voterdata << setw(15) << 12345678 << setw(15) << "Tommy Sauche" << setw(15) << "23" << setw(15) << "Carlton" << setw(15) << "Student" << endl;
	}
	voterdata.close();
	return 0;
}


int candidatedata_file() // Creating and writing into candidate database
{
	ofstream candidatedata;
	candidatedata.open("CandidateDatabase.txt");
	if (!candidatedata)
	{
		cout << "File not created";
	}
	else
	{
		cout << "Candidate Database created successfully!\n";
		candidatedata << "Candidate Data Base\n";
		// candidatedata << setw(15) << "Party" << setw(15) << "Name" << setw(15) << "Age" << setw(15) << setw(15) << "District" << setw(15) << "Count" << endl;
		// candidatedata << setw(15) << "Greens" << setw(15) << "Jane Goodie" << setw(15) << 50 << setw(15) << setw(15) << "Kensington" << setw(15) << 28 << endl;
		// candidatedata << setw(15) << "Liberal" << setw(15) << "Harry Badgoi" << setw(15) <<45 << setw(15) << setw(15) << "Brighton" << setw(15) << 32 << endl;
		candidatedata << "Party\t" << "Name\t\t" << "Age\t" << "District\t" << "Count" << endl;
		candidatedata << "Greens\t" << "Jane Goodie\t" << 50 << "\t" << "Kensington\t" << 28 << endl;
		candidatedata << "Liberal\t" << "Harry Badgoi\t" << 45 << "\t" << "Brighton\t" << 32 << endl;
	}
	candidatedata.close();
	return 0;
}


int read_voterdata_file() // Reading from voter database
{
	string line;
	ifstream voterdata("VoterDataBase.txt");
		if (voterdata.is_open())
		{
			while (getline(voterdata, line))
			{
				cout << line << '\n';
			}
			voterdata.close();
		}
		else cout << "Unable to read voter database file\n";
	return 0;
}


int read_candidatedata_file() // Reading from candidate database
{
	string line;
	ifstream candidatedata("candidatedata.txt");
	if (candidatedata.is_open()) {
		while (getline(candidatedata, line)) 
		{
			cout << line << '\n';
		}
		candidatedata.close();
	}
	else {
		cout << "Unable to read candidate database file\n";
	}
	return 0;
}

int main()
{
	char name[30], party[30], suburb[30], district[30], job[30];
	int age, id;
	// Taking in selection as a string, as the options are in alphabet letters
	// Main menu
	string menu;
	cout << "Please enter your choice: \n";
	cout << "Enter P - Print numbers for a particular candidate\n";
	cout << "Enter A - Add number of votes to a candidate\n";
	cout << "Enter S - Display the candidate with the smallest number of votes\n";
	cout << "Enter L - Display the candidate with the largest number of votes\n";
	cout << "Enter Q - Quit\n";
	cin >> menu;

	// Using if-else-if statement to accommodate upper/lowercase options

	if (menu == "p" || menu == "P")
	{
		voterdata_file();
		ofstream voterdata;
		
		voterdata.open("VoterDatabase.txt", ios::app);
			cout << "Writing to the Voter file" << endl;
			cout << "Please enter your Voter ID: ";
			cin >> id;
			voterdata << id << "\t\t";
			cout << "Please enter your name: ";
			cin.getline(name, 30);
			voterdata << name << "\t\t";
			cout << "Please enter your age: ";
			cin >> age;
			voterdata << age << "\t\t";
			cout << "Please enter your Suburb: "; 
			cin.getline(suburb, 30);
			voterdata << suburb << "\t\t";
			cout << "Please enter your Occupation: "; 
			cin.getline(job,30);
			voterdata << job << endl;
			cin.ignore();
		
		voterdata.close();
	}

	else if (menu == "a" || menu == "A")
	{
		candidatedata_file();
		ofstream candidatedata;
		candidatedata.open("CandidateDatabase.txt",ios::app);
		
			cout << "Writing to the Candidate file" << endl;
			cout << "Please enter your Party: "; cin >> party;
			cin.getline(party, 30);
			candidatedata << party << "\t\t";
			cout << "Please enter your name: "; cin >> name;
			cin.getline(name, 50);
			candidatedata << name << "\t\t";
			cout << "Please enter your age: "; cin >> age;
			cin >> age;
			candidatedata << age << "\t\t";
			cin.ignore();
		
		candidatedata.close();
	}
	else if (menu == "s" || menu == "S")
	{
		candidatedata_file();
		read_candidatedata_file();
		// To-do: search for smallest vote count, then extract value + candidate name
		cout << "The candidate with the smallest number of votes is Candidate "; // print candidate name and number of votes 
	}
	else if (menu == "l" || menu == "L")
	{
		voterdata_file();
		read_voterdata_file();
		// To-do: search for largest vote count, then extract value + candidate name
		cout << "The candidate with the largest number of votes is Candidate "; // print candidate name and number of votes
	}
	else if (menu == "q" || menu == "Q") 
	{
		cout << "Quit\n" << endl;
	}
	else 
	{
		cout << "Unknown selection, please try again.";

		// Calling main function to go back to list of selections 
		main();
	}

	return 0;
}
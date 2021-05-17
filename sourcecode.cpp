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


// Taking in selection 
	string menu;
	cout << "Please enter your choice: \n";
	cout << "Enter P - Print number of votes for a particular candidate\n";
	cout << "Enter A - Add number of votes to a candidate\n";
	cout << "Enter S - Display candidate with the smallest number of votes\n";
	cout << "Enter L - Display candidate with the largest number of votes\n";
	cout << "Enter Q - Quit\n";
	cin >> menu;

// Using if-else-if statement to accommodate alphabet letters 

	if (menu == "p" || menu == "P") {
		voterdata_file();
		cout << "this is for option P";
	}
	else if (menu == "a" || menu == "A") {
		candidatedata_file();
		cout << "This is for option A";
	}
	else if (menu == "s" || menu == "S") {
		// write code here 
		cout << "This is for option S";
	}
	else if (menu == "l" || menu == "L") {
		// write code here 
		cout << "This is for option L";
	}
	else if (menu == "q" || menu == "Q") {
		cout << "Quit";
	}
	else {
		cout << "Unknown selection, please try again.\n";
		// Calling main function to go back to list of selections 
		return main();
	}

return 0;
}
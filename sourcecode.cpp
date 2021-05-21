#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <string>
using namespace std;


int main()
{
	int length, vote, identifier;
	string id;
	length = id.length();
	
	//rows, collumns
	string candidates[15][6] = 
	{ 
		{"Name\t\t", "Identifier\t", "Party\t\t", "Age\t", "Electorate\t", "Vote"}, 
		{"Jenny Goodie\t", "1\t\t", "Greens\t\t","36\t","Melbourne\t", "3"},
		{"Harry Badgoi\t", "2\t\t", "Liberal\t", "53\t", "Brighton\t", "17"},
		{"Robert Miner\t", "3\t\t",  "Liberal\t", "61\t", "Carrum\t\t", "8"},
		{"Samson Forresta\t", "4\t\t", "Greens\t\t", "39\t", "Hawthorn\t", "10"},
		{"Elena Werker\t", "5\t\t", "Labour\t\t", "42\t", "Preston\t", "55"},
		{"William Iamme\t", "6\t\t", "Independent\t", "29\t", "Essendon\t", "5"},
		{"Isabelle \t", "7\t\t", "Labour\t\t", "47\t", "Ivanhoe\t", "43"},
		{"David Doitte\t", "8\t\t", "Labour\t\t", "55\t", "", "72"},
		{"Michael McGhie\t", "9\t\t", "Independent\t", "32\t", "", "11"},
		{"Tara Bell\t", "10\t\t", "Liberal\t", "65\t", "", "87"}
	};
	
	string voters[15][5] = 
	{
		{"Voter ID\t", "Name\t", "Age\t", "Suburb\t", "Occupation"},
		{"192837465\t", "Barry B Benson\t","23\t", "Parkville\t", "Pilot"},
		{"123456789\t", "Realman Persona\t", "56\t", "", ""},
		{"896745231\t", "Donald Dook\t", "32\t", "", "Vet"},
		{"274910237\t", "", "", "", ""},
		{"815263940\t", "", "", "", ""},
		{"909878767\t", "", "", "", ""},
	};
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
		for (int i = 0; i < 15; i++)
			{
				for (int j = 0; j < 6; j++)
				{
					cout << candidates[i][j] << " ";
				}
				cout << endl;
			}
		main();
	}

	else if (menu == "a" || menu == "A")
	{
		cout << "Please enter a your 9 integer voting ID:\n";
		cin >> id;
		
		if (length == 9)
		{
			cout << "Please enter your votes for the following candidates\n";
			for (int i = 0; i < 15; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					cout << candidates[i][j] << " ";
				}
				cout << endl;
			}
			cout << "Enter the Identifier for the candidate you wish to vote for\n";
			cin >> identifier;
			switch (identifier)
			{
			case 1:
				cout << "Enter you vote for Jenny Goodie\n";
				cin >> vote;

				//cout << "test success!";
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				break;
			case 8:
				break;
			case 9:
				break;
			case 10:
				break;
			}
		}
		else
		{
			cout << "Invalid voting ID please try again.";
		}
		//cout << "The list is empty\n";
		main();
	}
	else if (menu == "s" || menu == "S")
	{
		
		// To-do: search for smallest vote count, then extract value + candidate name
		cout << "The candidate with the smallest number of votes is Candidate " ; // print candidate name and number of votes 
		main();
	}
	else if (menu == "l" || menu == "L")
	{
		
		// To-do: search for largest vote count, then extract value + candidate name
		cout << "The candidate with the largest number of votes is Candidate "; // print candidate name and number of votes
		main();
	}
	else if (menu == "q" || menu == "Q") 
	{
		cout << "Goodbye!\n" << endl;
	}
	else 
	{
		cout << "Unknown selection, please try again." << endl;

		// Calling main function to go back to list of selections 
		main();
	}

	return 0;
}


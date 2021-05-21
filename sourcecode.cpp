#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

void converter()
{
	int vote1;
	stringstream ss;
	ss << vote1;
	string svote1;
	ss >> svote1;
}

int main()
{
	void converter();
	int vote1, vote2, vote3, vote4, vote5, vote6, vote7, vote8, vote9, vote10;
	int length, identifier, i, j;
	string id, name[20], age[3], suburb[20], job[20];
	string svote1, svote2, svote3, svote4, svote5, svote6, svote7, svote8, svote9, svote10;
	length = id.length();
	string votecount1 = svote1 + 3;
	string votecount2 = svote2 + 17;
	string votecount3 = svote3 + 8;
	string votecount4 = svote4 + 10;
	string votecount5 = svote5 + 55;
	string votecount6 = svote6 + 5;
	string votecount7 = svote7 + 43;
	string votecount8 = svote8 + 72;
	string votecount9 = svote9 + 11;
	string votecount10 = svote10 + 87;
	//rows, collumns
	string candidates[15][6] = 
	{ 
		{"Name\t\t", "Identifier\t", "Party\t\t", "Age\t", "Electorate\t", "Vote Count"}, 
		{"Jenny Goodie\t", "1\t\t", "Greens\t\t","36\t","Melbourne\t", votecount1},
		{"Harry Badgoi\t", "2\t\t", "Liberal\t", "53\t", "Brighton\t", votecount2},
		{"Robert Miner\t", "3\t\t",  "Liberal\t", "61\t", "Carrum\t\t", votecount3},
		{"Samson Forresta\t", "4\t\t", "Greens\t\t", "39\t", "Hawthorn\t", votecount4},
		{"Elena Werker\t", "5\t\t", "Labour\t\t", "42\t", "Preston\t", "55"},
		{"William Iamme\t", "6\t\t", "Independent\t", "29\t", "Essendon\t", "5"},
		{"Isabelle Aboore\t", "7\t\t", "Labour\t\t", "47\t", "Ivanhoe\t", "43"},
		{"David Doitte\t", "8\t\t", "Labour\t\t", "55\t", "Prahran\t", "72"},
		{"Michael McGhie\t", "9\t\t", "Independent\t", "32\t", "Rowville\t", "11"},
		{"Tara Bell\t", "10\t\t", "Liberal\t", "65\t", "Sunbury\t", "87"}
	};
	
	string voters[15][5] = 
	{
		{"Voter ID\t", "Name\t", "Age\t", "Suburb\t", "Occupation"},
		{"192837465\t", "Barry B Benson\t","23\t", "Parkville\t", "Pilot"},
		{"123456789\t", "Realman Persona\t", "56\t", "", ""},
		{"896745231\t", "Donald Dook\t", "32\t", "", "Vet"},
		{"274910237\t", "James Jameson\t", "62\t", "", ""},
		{"815263940\t", "Wendy Elession\t", "45\t", "", ""},
		{"909878767\t", "Eugene Ious\t", "21\t", "", ""},
		{id, name[20], age[3], suburb[20], job[20]}
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
		
		if (length < 10)
		{
			cout << "Please enter your Name:\n";

			cout << "Please enter your Age:\n";
			cout << "Please enter your Suburb:\n";
			cout << "Please enter your Occupation:\n";
			
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
					cout << "\nEnter your vote for Jenny Goodie\n";
					cin >> vote1;

					break;
				case 2:
					cout << "\nEnter your vote for Harry Badgoi\n";
					cin >> vote2;

					break;
				case 3:
					cout << "\nEnter your vote for Robert Miner\n";
					cin >> vote3;

					break;
				case 4:
					cout << "\nEnter your vote for Samson Forresta\n";
					cin >> vote4;

					break;
				case 5:
					cout << "\nEnter your vote for Elena Werker\n";
					cin >> vote5;

					break;
				case 6:
					cout << "\nEnter your vote for William Iamme\n";
					cin >> vote6;

					break;
				case 7:
					cout << "\nEnter your vote for David Doitte\n";
					cin >> vote7;

					break;
				case 8:
					cout << "\nEnter your vote for Isabelle Aboore\n";
					cin >> vote8;

					break;
				case 9:
					cout << "\nEnter your vote for Michael McGhie\n";
					cin >> vote9;

					break;
				case 10:
					cout << "\nEnter your vote for Tara Bell\n";
					cin >> vote10;

					break;
				}
		}
		else
		{
			cout << "Invalid voting ID please try again.\n";
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
		cout << "Unknown selection, please try again.\n" << endl;

		// Calling main function to go back to list of selections 
		main();
	}

	return 0;
}


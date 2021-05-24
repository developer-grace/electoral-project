#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;



void stringToInt()
{
	
	for (int i = 1; i < 15; i++)
	{
		for (int v = 0; v < 5; i++)
		{
			string candidates[15][6];
			string str = candidates[i][5];
			int num;
			stringstream ss;
			ss << str;
			ss >> num;
			int NumVotes[15] = { num };
		}
	}
}

int main()
{
	int vote1, vote2, vote3, vote4, vote5, vote6, vote7, vote8, vote9, vote10;
	int counter1 = 0, counter2=0, counter3=0, counter4=0, counter5=0, counter6=0, counter7=0, counter8=0, counter9=0, counter10=0;
	int length, identifier, i, j;
	//int NumVotes[15]{ counter1, counter2, counter3, counter4, counter5, counter6, counter7, counter8, counter9, counter10 };
	string id;
	string svote1="0", svote2="0", svote3 = "0", svote4 = "0", svote5 = "0", svote6 = "0", svote7 = "0", svote8 = "0", svote9 = "0", svote10 = "0";
	length = id.length();
	double large, min;
	int NumVotes[15];
	large = NumVotes[i];
	min = NumVotes[i];
	string menu;
	//rows, collumns
	while (menu != "q" && menu != "Q")
	{
	stringstream s1;
		s1 << counter1;
		s1 >> svote1;
	stringstream s2;
		s2 << counter2;
		s2 >> svote2;
	stringstream s3;
		s3 << counter3;
		s3 >> svote3;
	stringstream s4;
		s4 << counter4;
		s4 >> svote4;
	stringstream s5;
		s5 << counter5;
		s5 >> svote5;
	stringstream s6;
		s6 << counter6;
		s6 >> svote6;
	stringstream s7;
		s7 << counter7;
		s7 >> svote7;
	stringstream s8;
		s8 << counter8;
		s8 >> svote8;
	stringstream s9;
		s9 << counter9;
		s9 >> svote9;
	stringstream s10;
		s10 << counter10;
		s10 >> svote10;

	string candidates[15][6] = 
	{ 
		{"Name\t\t", "Identifier\t", "Party\t\t", "Age\t", "Electorate\t", "Vote Count"}, 
		{"Jenny Goodie\t", "1\t\t", "Greens\t\t","36\t","Melbourne\t", svote1},
		{"Harry Badgoi\t", "2\t\t", "Liberal\t", "53\t", "Brighton\t", svote2},
		{"Robert Miner\t", "3\t\t",  "Liberal\t", "61\t", "Carrum\t\t", svote3},
		{"Samson Forresta\t", "4\t\t", "Greens\t\t", "39\t", "Hawthorn\t", svote4},
		{"Elena Werker\t", "5\t\t", "Labour\t\t", "42\t", "Preston\t", svote5},
		{"William Iamme\t", "6\t\t", "Independent\t", "29\t", "Essendon\t", svote6},
		{"Isabelle Aboore\t", "7\t\t", "Labour\t\t", "47\t", "Ivanhoe\t", svote7},
		{"David Doitte\t", "8\t\t", "Labour\t\t", "55\t", "Prahran\t", svote8},
		{"Michael McGhie\t", "9\t\t", "Independent\t", "32\t", "Rowville\t", svote9},
		{"Tara Bell\t", "10\t\t", "Liberal\t", "65\t", "Sunbury\t",  svote10}
	};
	
	string voters[15][5] = 
	{
		{"Voter ID\t", "Name\t", "Age\t", "Suburb\t", "Occupation"},
		{"192837465\t", "Barry B Benson\t","23\t", "Parkville\t", "Pilot"},
		{"123456789\t", "Realman Persona\t", "56\t", "Mordialloc\t", "Accountant"},
		{"896745231\t", "Donald Dook\t", "32\t", "Footscray\t", "Vet"},
		{"274910237\t", "James Jameson\t", "62\t", "Glen Waverley\t", "Retired"},
		{"815263940\t", "Wendy Elession\t", "45\t", "Richmond\t", "Teacher"},
		{"909878767\t", "Eugene Ious\t", "21\t", "Thornbury\t", "Barister"},
		//{id, name[20], age[3], suburb[20], job[20]}
	};
	
	// Taking in selection as a string, as the options are in alphabet letters
	// Main menu
	
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
			for (i = 0; i < 15; i++)
			{
				for (j = 0; j < 6; j++)
				{
					cout << candidates[i][j] << " ";
				}
				cout << endl;
			}
			
		}

		else if (menu == "a" || menu == "A")
		{
			cout << "Please enter a your 9 integer voting ID:\n";
			cin >> id;

			if (length < 10)
			{
				cout << "Please enter your votes for the following candidates\n";
				for (i = 0; i < 15; i++)
				{
					for (j = 0; j < 2; j++)
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
						if (vote1 != 0)
						{
							counter1 = counter1 + vote1;
						}
						cout << "Thank you for voting!\n";
						cout << "The count for Jenny Goodie is " << counter1 << " votes\n";
					break;

				case 2:
					cout << "\nEnter your vote for Harry Badgoi\n";
					cin >> vote2;
						if (vote2 != 0)
						{
							counter2 = counter2 + vote2;
						}
						cout << "Thank you for voting!\n";
						cout << "The count for Harry Badgoi is " << counter2 << " votes\n";
					break;
				case 3:
					cout << "\nEnter your vote for Robert Miner\n";
					cin >> vote3;
						if (vote3 != 0)
						{
							counter3 = counter3 + vote3;
						}
						cout << "Thank you for voting!\n";
						cout << "The count for Robert Miner is " << counter3 << " votes\n";
					break;
				case 4:
					cout << "\nEnter your vote for Samson Forresta\n";
					cin >> vote4;
						if (vote4 != 0)
						{
							counter4 = counter4 + vote4;
						}
						cout << "Thank you for voting!\n";
						cout << "The count for Samson Forresta is " << counter4 << " votes\n";
					break;
				case 5:
					cout << "\nEnter your vote for Elena Werker\n";
					cin >> vote5;
						if (vote5 != 0)
						{
							counter5 = counter5 + vote5;
						}
						cout << "Thank you for voting!\n";
						cout << "The count for Elena Werker is " << counter5 << " votes\n";
					break;
				case 6:
					cout << "\nEnter your vote for William Iamme\n";
					cin >> vote6;
						if (vote6 != 0)
						{
							counter6 = counter6 + vote6;
						}
						cout << "Thank you for voting!\n";
						cout << "The count for William Iamme is " << counter6 << " votes\n";
					break;
				case 7:
					cout << "\nEnter your vote for David Doitte\n";
					cin >> vote7;
						if (vote7 != 0)
						{
							counter7 = counter7 + vote7;
						}
						cout << "Thank you for voting!\n";
						cout << "The count for David Doitte is " << counter7 << " votes\n";
					break;
				case 8:
					cout << "\nEnter your vote for Isabelle Aboore\n";
					cin >> vote8;
						if (vote8 != 0)
						{
							counter8 = counter8 + vote8;
						}
						cout << "Thank you for voting!\n";
						cout << "The count for Isabelle Aboore is " << counter8 << " votes\n";
					break;
				case 9:
					cout << "\nEnter your vote for Michael McGhie\n";
					cin >> vote9;
						if (vote9 != 0)
						{
							counter9 = counter9 + vote9;
						}
						cout << "Thank you for voting!\n";
						cout << "The count for Michael Mchie is " << counter9 << " votes\n";
					break;
				case 10:
					cout << "\nEnter your vote for Tara Bell\n";
					cin >> vote10;
						if (vote10 != 0)
						{
							counter10 = counter10 + vote10;
						}
						cout << "Thank you for voting!\n";
						cout << "The count for Tara Bell is " << counter10 << " votes\n";
					break;
				}
			}

			else
			{
				cout << "Invalid voting ID please try again.\n";
			}
			
		}
		else if (menu == "s" || menu == "S")
			{
			void stringToInt();
			int small;
			for (int i = 0; i < 15; i++)
			{
				if (NumVotes[i] < small)
					small = NumVotes[i];
			}
			cout << "The smallest number of votes is " << small << "\n"; // print number of votes 	// print candidate name and number of votes 
			
			}
		else if (menu == "l" || menu == "L")
			{
			int large;
				// To-do: search for largest vote count, then extract value + candidate name
				//large = NumVotes[20];

				//if (NumVotes == 0)
				//{
				//	cout << "Unable to determine the largest number of votes, the list is empty.\n";
				//}
				//else
				//{
					//int i = 0;
					large = NumVotes[i];
					for ( i = 0; i < 15; i++)
					{
						if (NumVotes[i] > large)
						{
							large = NumVotes[i];
						}
					}
				//}
				cout << "The largest number of votes is " << large << endl;
			}
		else if (menu == "q" || menu == "Q")
		{
			cout << "Goodbye!\n" << endl;
		}
		else
		{
			cout << "Unknown selection, please try again.\n" << endl;

			// Calling main function to go back to list of selections 
		}
		
	}
	
	return 0;
}


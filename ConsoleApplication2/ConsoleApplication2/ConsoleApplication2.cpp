#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {

	//Varibles of the data from th tweets and the user input
	string myData;
	string line;
	string userInput;
	bool quit = false;
	int count = 1;
	int custom = 0;
	int offset;

	while (count != 12) {

		//The Options Menu
		cout << "Select your option" << endl;
		cout << "Option 1: Display all Tweets" << endl;
		cout << "Option 2: Count all Tweets" << endl;
		cout << "Option 3: Money Tweets" << endl;
		cout << "Option 4: Politics Tweets" << endl;
		cout << "Option 5: Paris Tweets" << endl;
		cout << "Option 6: DreamWorks Tweets" << endl;
		cout << "Option 7: Uber Tweets" << endl;
		cout << "Option 8: Chicken Tweets" << endl;
		cout << "Option 9: Games Tweets" << endl;
		cout << "Option 10: Bath Tweets" << endl;
		cout << "Option 11: Input your own" << endl;
		cout << "Option 12: Quit" << endl;
		cin >> count;


		//Entry Access point into the excell file containig all of the Tweets
		ifstream inFile;
		inFile.open("sampleTweets.csv");

		//A While loop searching for a secific word/artifact
		while (!inFile.eof()) {

			//Switch statement containing all of the options presented to the user at the start
			switch (count) {

				//The case responsible for accessing the file and reading from it to display all of the tweets
			case 1:

				if (inFile.good()) {
					cout << "Reading From File" << endl;
					while (!inFile.eof()) {


						getline(inFile, myData);
						cout << myData << endl;
					}


					inFile.close();

				}
				break;

				//The case responsible for counting all of the tweets and displaying JUST the amount of tweets, instead of all of the tweets at once
			case 2:
				if (inFile.good()) {
					count = 0;
					cout << "Reading From File" << endl;
					while (!inFile.eof()) {


						getline(inFile, myData);
						count++;
					}



					inFile.close();

				}
				break;

				//The case responsible for counting and displaying all of the tweets that include the word paris
			case 3:
			
				count = 0;
				while (getline(inFile, line)) {

					if ((offset = line.find("Money", 0)) != string::npos || (offset = line.find("money", 0)) != string::npos) {
						count++;
						cout << line << endl;
					}
				}
				break;
			
				//The case responsible for counting and displaying all of the tweets that include the word paris
			case 4:
			
				count = 0;
				while (getline(inFile, line)) {

					if ((offset = line.find("Politics", 0)) != string::npos || (offset = line.find("politics", 0)) != string::npos) {
						count++;
						cout << line << endl;
					}
				}
				break;
			
				//The case responsible for counting and displaying all of the tweets that include the word paris
			case 5:
			
				count = 0;
				while (getline(inFile, line)) {

					if ((offset = line.find("Paris", 0)) != string::npos || (offset = line.find("paris", 0)) != string::npos) {
						count++;
						cout << line << endl;
					}
				}
				break;

			
			//The case responsible for counting and displaying all of the tweets that include the word DreamWorks
			case 6:

				count = 0;
				while (getline(inFile, line)) {

					if ((offset = line.find("DreamWorks", 0)) != string::npos || (offset = line.find("dreamWorks", 0)) != string::npos) {
						count++;
						cout << line << endl;
					}
				}
				break;

				//The case responsible for counting and displaying all of the tweets that include the word Uber
			case 7:

				count = 0;
				while (getline(inFile, line)) {

					if ((offset = line.find("Uber", 0)) != string::npos || (offset = line.find("uber", 0)) != string::npos) {
						count++;
						cout << line << endl;
					}
				}

				break;

				//The case responsible for counting and displaying all of the tweets that include the word Chicken
			case 8:

				count = 0;
				while (getline(inFile, line)) {

					if ((offset = line.find("Chicken", 0)) != string::npos || (offset = line.find("chicken", 0)) != string::npos) {
						count++;
						cout << line << endl;
					}
				}

				break;

				//The case responsible for counting and displaying all of the tweets that include the word Games
			case 9:

				count = 0;
				while (getline(inFile, line)) {

					if ((offset = line.find("Games", 0)) != string::npos || (offset = line.find("games", 0)) != string::npos) {
						count++;
						cout << line << endl;
					}
				}

				break;

				//The case responsible for counting and displaying all of the tweets that include the word Bath
			case 10:

				count = 0;
				while (getline(inFile, line)) {

					if ((offset = line.find("Bath", 0)) != string::npos || (offset = line.find("bath", 0)) != string::npos) {
						count++;
						cout << line << endl;
					}
				}

				break;

				//The case responsible for counting and displaying all of the tweets with a word of your choice
			case 11:

				count = 0;
				cout << "Well it'd be smart to say the word, genius...." << endl;

				cin >> userInput;
				while (getline(inFile, line)) {

					if ((offset = line.find(userInput, 0)) != string::npos || (offset = line.find(userInput, 0)) != string::npos) {
						count++;
						cout << line << endl;
					}
				}

				//The case responsible leaving the app
				break;

			case 12:


				cout << "Thank you for your time, now leave pls....." << endl;
				quit = true;
				break;
			}

			//if statement allowing the finals case to break out of it's neverending loop
			if (quit == true) {
				break;
			}

			}

			//Counting the tweets regardless of the case
			cout << count << endl;


			}



			//System pause before exiting the console application
			system("pause");

			return 0;
		}
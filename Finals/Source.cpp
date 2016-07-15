#include <string>
#include <iostream>
#include <chrono>
#include <time.h>

using namespace std;

void clearScreen();
void clearScreen()
{
	cout << string(50, '\n');
}

void refresher(string boardState[7], int errorsMade, string blankSpaces[11], int chosenWordLength, string usedWords[26]);
void refresher(string boardState[7], int errorsMade, string blankSpaces[11], int chosenWordLength, string usedWords[26])
{
	clearScreen();
	cout << boardState[errorsMade] << endl;
	cout << blankSpaces[chosenWordLength] << "                            " << chosenWordLength << " spaces" << endl;
	cout << "Used words: ";
	for (int e = 0; e < 26; e++)
	{
		cout << usedWords[e];
	}
	cout << endl;
};

int main()
{
	srand(time(NULL));
	//possible hangman boardstates
	string boardState[7] =
	{
		"           __________ \n"
		"          |         |\n"
		"                    |\n"
		"                    |\n"
		"                    |\n"
		"                    |\n"
		"                    |\n"
		"                    |\n"
		"                    |\n"
		"                    | \n"
		"                    |\n"
		"          __________|_______ \n",
		"           __________ \n"
		"          |         |\n"
		"          0         |\n"
		"                    |\n"
		"                    |\n"
		"                    |\n"
		"                    |\n"
		"                    |\n"
		"                    |\n"
		"                    | \n"
		"                    |\n"
		"          __________|_______ \n",
		"           __________ \n"
		"          |         |\n"
		"          0         |\n"
		"          |         |\n"
		"                    |\n"
		"                    |\n"
		"                    |\n"
		"                    |\n"
		"                    |\n"
		"                    | \n"
		"                    |\n"
		"          __________|_______ \n",
		"           __________ \n"
		"          |         |\n"
		"          0         |\n"
		"         -|         |\n"
		"                    |\n"
		"                    |\n"
		"                    |\n"
		"                    |\n"
		"                    |\n"
		"                    | \n"
		"                    |\n"
		"          __________|_______ \n",
		"           __________ \n"
		"          |         |\n"
		"          0         |\n"
		"         -|-        |\n"
		"                    |\n"
		"                    |\n"
		"                    |\n"
		"                    |\n"
		"                    |\n"
		"                    | \n"
		"                    |\n"
		"          __________|_______ \n",
		"           __________ \n"
		"          |         |\n"
		"          0         |\n"
		"         -|-        |\n"
		"          /         |\n"
		"                    |\n"
		"                    |\n"
		"                    |\n"
		"                    |\n"
		"                    | \n"
		"                    |\n"
		"          __________|_______ \n",
		"           __________ \n"
		"          |         |\n"
		"          0         |\n"
		"         -|-        |\n"
		"          /\\        |\n"
		"                    |\n"
		"                    |\n"
		"                    |\n"
		"                    |\n"
		"                    | \n"
		"                    |\n"
		"          __________|_______ \n",

	};
	//shows blanks equal to number of letters
	string blankSpaces[11] = { "", "_", "__", "___", "____", "_____", "______", "_______", "________", "_________", "__________" };
	int randWord;
	int errorsMade = 0;
	randWord = rand() % 5;
	string modeChoice = "blank"	;
	string chosenWord;
	char guessedLetter;
	int u = 0;
	string usedLetters[26] = { "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "" };
	// how long word is
	int chosenWordLength;
	int positionInGuessedWord = 0;
	bool inWord = false;
	bool spacesInWord = true;
	chosenWordLength = chosenWord.length();

	// all variables defined; hangman and blanks made
	string easyWords[5] = { "university", "dead", "toughness", "rat", "monastery" };
	string medWords[5] = { "cowboy", "preordain", "judge", "abrupt", "decay" };
	string hardWords[5] = { "dredge", "remand", "tabernacle", "neonate", "verdant" };
	while (modeChoice != "easy" || modeChoice != "medium" || modeChoice != "hard")
	{
		cout << "Do you want to play easy , medium , or hard hangman ?" << endl << "(enter one)" << endl;
		cin >> modeChoice;

		if (modeChoice == "easy")
		{
			chosenWord = easyWords[randWord];
			cout << "You chose to use the easy word list." << " " << chosenWord << endl;
			break;
		}
		else if (modeChoice == "medium")
		{
			chosenWord = medWords[randWord];
			cout << "You chose to use the medium word list." << endl;
			break;
		}
		else if (modeChoice == "hard")
		{
			chosenWord = hardWords[randWord];
			cout << "You chose to use the hard word list." << endl;
			break;
		}
		else
			cout << "You entered an invalid character." << endl;
	}
	chosenWordLength = chosenWord.length();
	refresher(boardState, errorsMade, blankSpaces, chosenWordLength, usedLetters);
	while (errorsMade < 6)
	{
		refresher(boardState, errorsMade, blankSpaces, chosenWordLength, usedLetters);
		u++;
		inWord = false;
		cout << "Guess a letter: " << endl;
		// player guesses letter
		cin >> guessedLetter;
		usedLetters[u] = guessedLetter;
		cout << "You guessed " << guessedLetter << endl;
		// loop for actual game mechanic
		for (int i = 0; i <= chosenWordLength; i++)
		{
			for (int x = 0; x <= chosenWordLength; x++)
			{
				if (chosenWord[x] == guessedLetter)
				{
					inWord = true;
					blankSpaces[chosenWordLength][x] = chosenWord[x];
					// word needs to be set to blankspaces[][].						
					// fix all the bugs.
				}
			}
			if ( chosenWord == blankSpaces[chosenWordLength])
			{
				refresher(boardState, errorsMade, blankSpaces, chosenWordLength, usedLetters);
				cout << "You win!" << endl;
				exit(0);
			}
		}
		if (inWord == false)
			errorsMade++;
		refresher(boardState, errorsMade, blankSpaces, chosenWordLength, usedLetters);
	}
}



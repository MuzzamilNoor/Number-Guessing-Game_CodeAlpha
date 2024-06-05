#include <iostream>
#include <stdio.h>
#include <ctime>
#include <cstdlib>
using namespace std;

void NumberGuesssingGame()
{
	int secretnbr = 0;
	int guess = 0;
	bool found = false;
	srand(time(0));                  // genterating random numbers
	secretnbr = rand() % 100 + 1;   //not more than 100
	//cout << secretnbr << endl;
	int attempts = 1;
	cout << "                           *************************************" << endl;
	cout << "                              WELCOME TO NUMBER GUESSING GAME" << endl;
	cout << "                           *************************************" << endl << endl;
	cout << "Guess the Number Between 1 to 100." << endl;

	do
	{
		cin >> guess;
		int diff,negdiff;
		diff = secretnbr - guess;
		negdiff = guess - secretnbr;
		if (guess > secretnbr)
		{
			if (negdiff <= 5)
			{
				cout << "The Guess is high (Approximatly Reached)\n TRY AGAIN!!!\n" << endl;
				attempts += 1;
			}
			else
			{
				cout << "The Guess is too high\n TRY AGAIN!!!\n" << endl;
				attempts += 1;
			}
		}

		else if (guess < secretnbr)
		{
			if (diff <= 5)
			{
				cout << "The Guess is low (Approximatly Reached)\n TRY AGAIN!!!\n" << endl;
				attempts += 1;
			}
			else
			{
				cout << "The Guess is too low\n TRY AGAIN!!!\n" << endl;
				attempts += 1;
			}
		}
		else
		{
			cout << "                                **********************" << endl;
			cout << "                                    CONGRATULATION " << endl;
			cout << "                                **********************" << endl<<endl;
			cout << "You have guesss the correct Number... " << guess << endl;
			cout << "It took " << attempts << " attempts.." << endl;
			found = true;
		}
	} while (!found);
}
int main()
{

//----------------Number guessing Game
	NumberGuesssingGame();
	return 0;
	
}




#include <iostream>
#include <string>
using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();

int main() {
	
	PrintIntro();
	PlayGame();
	
	return 0;
}





void PrintIntro() {
	constexpr int WORD_LENGTH = 5;
	//intro to game
	cout << "Welcome to Bulls and Cows" << endl;
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?" << endl;
	return;
}

void PlayGame() {
	constexpr int NUMBER_OF_TURNS = 5;
	for (int i = 0; i < NUMBER_OF_TURNS; i++)
	{
		string Guess = GetGuess();
		cout << "Your guess was " << Guess << endl;
		cout << endl;
	}
}

string GetGuess() {
	// get guess from player
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);
	return Guess;
}
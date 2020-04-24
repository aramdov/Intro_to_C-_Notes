// CS 802 Assignment 3 by Aram Dovlatyan
// Program to play guessing game

#include <iostream> //needed for cin and cout, etc.
#include <ctime>
using namespace std; //also needed for cin and cout

int main()
{
	// The following assigns a single random number between 0 and 50 to num and then prints num;

	srand((unsigned)time(0));
	
	int guess; int div_count = 0; int total_trials = 0; int random_num; int games = 0;
	char answer = 'y';
	guess = -1;

	while (answer == 'y') {

		random_num = (rand() % 50) + 1;

		div_count = 0;
		for (int i = 2; i < random_num; i++) {
			if (random_num % i == 0) {
				div_count = div_count + 1;
			}
		}
		cout << "\nI've picked a number between 1 and 50 that has " << div_count << " divisors" << endl;

		int current_trials = 0;
		guess = -1;
		games = games + 1;


		while (guess != random_num) {
			cout << "Guess the number: ";
			cin >> guess;
			total_trials = total_trials + 1;
			current_trials = current_trials + 1;

			if (guess > random_num) {
				cout << guess << " Is too high\n";
			}
			else if (guess < random_num) {
				cout << guess << " Is too low\n";
			}
			else {
				cout << "Right! It took you " << current_trials << " trials.";
				cout << "\nPlay again?[y/n] ";
				cin >> answer;
			}
			if (answer == 'n') {
				cout << "You averaged " << total_trials / games << " trials in " << games;
				break;
			}
		}
	}
	
}
// CS 802 Assignment 4, Nested Loops,
// The column on far left is just an index column for the multiplication table
// Aram Dovlatyan, February 2nd 2020

#include<iostream>
using namespace std;
#include <ctime>


int main()
{
    srand((unsigned)time(0));
    char answer = 'y';
    int random_row;
    int random_column;
    int random_val;
    int guess_col = 0; int guess_row = 0;


    cout << "Find the wrong number in the multiplcation table below:" << endl;
    

        while (answer == 'y') {
            random_val = (rand() % 50) + 1;
            random_row = (rand() % 10) + 1;
            random_column = (rand() % 10) + 1;

            for (int c = 1; c <= 10; c++)
            {
                cout << c << "| ";

                for (int i = 1; i <= 10; i++)
                {


                    if (i == random_column && c == random_row) {
                        cout << random_val << '\t';
                    }
                    else {
                        cout << i * c << '\t';
                    }



                }
                cout << endl;
            }
            cout << "Enter the row and column of the incorrect value: ";
            cin >> guess_row >> guess_col;
            if (guess_row != random_row||guess_col != random_column)
            {
                cout << "\nWrong! The incorrect value is in cell " << random_row << " " << random_column << " and should be " << random_row * random_column << ".";
                cout << "\nPlay again> [y/n]: ";
                cin >> answer;
            }
            if (guess_row == random_row && guess_col == random_column) {
                cout << "\nRight!";
                cout << "\nPlay again? [y/n]: ";
                cin >> answer;

            }
        }
 

}

// CS 802 Assignment 5, Functions
// Aram Dovlatyan, February 5th 2020

#include<iostream>
using namespace std;

int n1, d1, n2, d2;
char slash;

int menu()
{

    int selection;

    cout << "\nSelect one of the following:"

        << "\n1. Add"

        << "\n2. Subtract"

        << "\n3. Multiply"

        << "\n4. Divide"

        << "\n5. Quit";

    cout << "\nEnter selection: ";

    cin >> selection;

    return selection;
}

void add()
{   
        cout << "\nSum Fraction: " << n1 * d2 + n2 * d1 << slash << d1 * d2 << "\n";
  
}

void sub()
{
    cout << "\nDifference: " << n1 * d2 - n2 * d1 << slash << d1 * d2 << "\n";
}

void mul() {
    cout << "\nProduct: " << n1 * n2 << slash << d1 * d2 << "\n";
}

void div() {
    cout << "\nQuotient: " << n1 * d2 << slash << d1 * n2 << "\n";
}

int main()
{
    char answer = 'y';

    while (answer == 'y') {

        cout << "\nEnter two fractions: ";
        cin >> n1 >> slash >> d1 >> n2 >> slash >> d2;

        switch (menu())
        {
        case 1: add();
            break;

        case 2: sub();
            break;

        case 3: mul();
            break;

        case 4: div();
            break;

        case 5: answer = 'n';
            break;
        }

    }
}
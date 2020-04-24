// Aram_Assignment1_CS802.cpp : This file contains the 'main' function. Program execution begins and ends there.

// Program to read fractions and perform operations on them.
// Aram Dovlatyan
// CS-802

#include <iostream>
using namespace std;

int main()
{
	cout << "Enter two fractions:";
	int n1,d1,n2,d2;
	char slash;
	cin >> n1 >> slash >> d1 >> n2 >> slash >> d2;

	cout << "Sum Fraction:" << n1 * d2 + n2 * d1 << slash << d1 * d2 << "\n";

	cout << "Difference:" << n1 * d2 - n2 * d1 << slash << d1*d2 << "\n";

	cout << "Product:" << n1*n2 << slash << d1*d2<< "\n";

	cout << "Quotient" << n1 * d2 << slash << d1 * n2 << "\n";

	// I Realized it is more memory efficient to simply use the initial variables n1,d2,n2,d2 and do calculations off those within the output
	// Whereas before I was intializing variables for numerator/denominator of an output then printing that variable out.

	system("pause");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

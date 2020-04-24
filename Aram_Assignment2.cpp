// Aram Dovlatyan, Assignment 2 submission for CS 802
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter hours worked for the week ";
	int hours_worked;
	cin >> hours_worked;

	cout << "Hourly rate ";
	double hourly_rate;
	cin >> hourly_rate;

	cout << "How many of these were on a holiday?";
	int holiday_hours;
	cin >> holiday_hours;

	cout << "Did the employee have a birthday in the week [y/n]?";
	char birthday;
	cin >> birthday;

	double total_wage = 0;

	if ( hours_worked < 60 && hours_worked > 80) {
		int double_hours = hours_worked - 60;
		hours_worked = hours_worked - double_hours;
		total_wage = total_wage + double_hours * 2 * hourly_rate;
	}

	if (hours_worked > 40 && hours_worked < 60) {
		int overtime_hours = hours_worked - 40;
		total_wage = total_wage + overtime_hours * 1.5 * hourly_rate;
		hours_worked = hours_worked - overtime_hours;
	}

	if (holiday_hours > 0) {
		hours_worked = hours_worked - holiday_hours;
		total_wage = total_wage + holiday_hours * 2 * hourly_rate;
	}

	total_wage = total_wage + hours_worked * hourly_rate;

	if (birthday == 'y') {
		total_wage = total_wage + 0.07 * total_wage;
	}

	cout << "Wages due for the week:" << total_wage<< "\n";

}

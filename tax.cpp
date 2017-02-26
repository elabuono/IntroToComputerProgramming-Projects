/*
Program #1
ComputeTax.cpp
Erica LaBuono
*/

#include <iostream>
using namespace std;

int main() {
	// Introduce the user, ask for filing status
	cout << "***********************************************************" << endl;
	cout << "**\t2014 U.S. Federal Personal Tax Rate Calculator \t**" << endl;
	cout << "***********************************************************" << endl;
	cout << "0 = single filer" << endl << "1 = married jointly or qualifying widower" 
         << endl << "2 = married separately" << endl << "3 = head of household" << endl 
         << "\nEnter the correct filing status: ";

	int status;
	cin >> status;
	cout << "\n";

	// Ask user for income
	cout << "Enter the taxable income: $";
	double income;
	cin >> income;
	cout << "\n"; // Adds space between results and entry.

	// Calculate taxes
	double tax = 0;
	if (status == 0) { // Tax for single filer
		if (income <= 9075)
			tax = income * .10;
		else if (income <= 36900)
			tax = 9075 * .10 + (income - 9075) * .15;
		else if (income <= 89350)
			tax = 9075 * .10 + (36900 - 9075) * .15 + (income - 36900) * .25;
		else if (income <= 186350)
			tax = 9075 * .10 + (36900 - 9075) * .15 + (89350 - 36900) * .25 + (income - 89350) * .28;
		else if (income <= 405100)
			tax = 9075 * .10 + (36900 - 9075) * .15 + (89350 - 36900) * .25 + (186350 - 89350) * .28
			+ (income - 186350) * .33;
		else if (income <= 406750)
			tax = 9075 * .10 + (36900 - 9075) * .15 + (89350 - 36900) * .25 + (186350 - 89350) * .28
			+ (405100 - 186350) * .33 + (income - 405100) * .35;
		else
			tax = 9075 * .10 + (36900 - 9075) * .15 + (89350 - 36900) * .25 + (186350 - 89350) * .28
			+ (405100 - 186350) * .33 + (406750 - 405100) * .35 + (income - 406750) * .396;
	}
	else if (status == 1) { // Tax for married filing jointly
		if (income <= 18150)
			tax = income * .10;
		else if (income <= 73800)
			tax = 18150 * .10 + (income - 18150) * .15;
		else if (income <= 148800)
			tax = 18150 * .10 + (73800 - 18150) * .15 + (income - 73800) * .25;
		else if (income <= 226850)
			tax = 18150 * .10 + (73800 - 18150) * .15 + (148800 - 73800) * .25 + (income - 148800) * .28;
		else if (income <= 405100)
			tax = 18150 * .10 + (73800 - 18150) * .15 + (148800 - 73800) * .25 + (226850 - 148800) * .28
			+ (income - 226850) * .33;
		else if (income <= 457600)
			tax = 18150 * .10 + (73800 - 18150) * .15 + (148800 - 73800) * .25 + (226850 - 148800) * .28
			+ (405100 - 226850) * .33 + (income - 405100) * .35;
		else
			tax = 18150 * .10 + (73800 - 18150) * .15 + (148800 - 73800) * .25 + (226850 - 148800) * .28
			+ (405100 - 226850) * .33 + (457600 - 405100) * .35 + (income - 457600) * .396;
	}
	else if (status == 2) { // Tax for married separately
		if (income <= 9075)
			tax = income * .10;
		else if (income <= 36900)
			tax = 9075 * .10 + (income - 9075) * .15;
		else if (income <= 74425)
			tax = 9075 * .10 + (36900 - 9075) * .15 + (income - 36900) * .25;
		else if (income <= 113425)
			tax = 9075 * .10 + (36900 - 9075) * .15 + (74425 - 36900) * .25 + (income - 74425) * .28;
		else if (income <= 202550)
			tax = 9075 * .10 + (36900 - 9075) * .15 + (74425 - 36900) * .25 + (113425 - 74425) * .28
			+ (income - 113425) * .33;
		else if (income <= 228800)
			tax = 9075 * .10 + (36900 - 9075) * .15 + (74425 - 36900) * .25 + (113425 - 74425) * .28
			+ (202550 - 113425) * .33 + (income - 202550) * .35;
		else
			tax = 9075 * .10 + (36900 - 9075) * .15 + (74425 - 36900) * .25 + (113425 - 74425) * .28
			+ (202550 - 113425) * .33 + (228800 - 202550) * .35 + (income - 228800) * .396;
	}
	else if (status == 3) { // Tax for head of household
		if (income <= 12950)
			tax = income * .10;
		else if (income <= 49400)
			tax = 12950 * .10 + (income - 12950) * .15;
		else if (income <= 127550)
			tax = 12950 * .10 + (49400 - 12950) * .15 + (income - 49400) * .25;
		else if (income <= 206600)
			tax = 12950 * .10 + (49400 - 12950) * .15 + (127550 - 49400) * .25 + (income - 127550) * .28;
		else if (income <= 405100)
			tax = 12950 * .10 + (49400 - 12950) * .15 + (127550 - 49400) * .25 + (206600 - 127550) * .28
			+ (income - 206600) * .33;
		else if (income <= 432200)
			tax = 12950 * .10 + (49400 - 12950) * .15 + (127550 - 49400) * .25 + (206600 - 127550) * .28
			+ (405100 - 206600) * .33 + (income - 405100) * .35;
		else
			tax = 12950 * .10 + (49400 - 12950) * .15 + (127550 - 49400) * .25 + (206600 - 127550) * .28
			+ (405100 - 206600) * .33 + (432200 - 405100) * .35 + (income - 432200) * .396;
	}
	else { //Program ends and shows an error message.
		cout << "Error: invalid status number. ";
		system("pause");
		return 0;
	}

	//Display the tax result and close
	cout << "Your personal tax bill is: $" << static_cast<int>(tax * 100) / 100.0 << endl << "\n";
	system("pause");
	return 0;
}

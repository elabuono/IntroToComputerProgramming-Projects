/*
Erica LaBuono
Project #3
PrintCalender.cpp
*/

#include <iostream>
#include <iomanip>
using namespace std;

// Function Prototypes
void printMonth(int year, int month);
void printMonthTitle(int year, int month);
void printMonthName(int month);
void printMonthBody(int year, int month);
bool isLeapYear(int year);
int getStartDay(int year, int month);
int getTotalNumberOfDays(int year, int month);
int getNumberOfDaysInMonth(int year, int month);

int main() {
    // Ask the user to enter a year
    cout << "Enter a full year (ex. 2001, 2010): ";
    int year;
    cin >> year;
    
    // Ask the user to enter a month
    cout << "Enter a month in numerical form (must be in 1-12): ";
    int month;
    cin >> month;
    
    // Print calender for user's month and year
    printMonth(year, month);
    cout << endl;
    system("pause");
    return 0;
}

void printMonth(int year, int month) {
     // Create and print month heading
     printMonthTitle(year, month);
     // Create and print body of the month
     printMonthBody(year, month);
}

void printMonthTitle(int year, int month) {
     // Print the set up of the calender for the month and year
     printMonthName(month);
     cout << " " << year << endl;
     cout << "-------------------------------" << endl;
     cout << "Sun Mon Tues Wed Thur Fri Sat" << endl;   
}

void printMonthName(int month) {
     // Print the English name for the month heading
     switch (month) {
            case 1:
                 cout << "\tJanuary";
                 break;
            case 2:
                 cout << "\tFebruary";
                 break;
            case 3:
                 cout << "\tMarch";
                 break;
            case 4:
                 cout << "\tApril";
                 break;
            case 5:
                 cout << "\tMay";
                 break;
            case 6:
                 cout << "\tJune";
                 break;
            case 7:
                 cout << "\tJuly";
                 break;
            case 8:
                 cout << "\tAugust";
                 break;
            case 9:
                 cout << "\tSeptember";
                 break;
            case 10:
                 cout << "\tOctober";
                 break;
            case 11:
                 cout << "\tNovember";
                 break;
            case 12:
                 cout << "\tDecember";
                 break;
     }
}

void printMonthBody(int year, int month) {
     // Create and print month body, starting with correct first day 
     int startDay = getStartDay(year, month);
     
     // Get number of days in the month
     int numberOfDaysInMonth = getNumberOfDaysInMonth(year, month);
     
     // Build space before the first day of month prints
     int i = 0;
     for(i = 0; i < startDay; i++)
           cout << "    ";
     for(i = 1; i <= numberOfDaysInMonth; i++) {
           cout << setw(4) << i;
           
           if((i + startDay) % 7 == 0)
                 cout << endl;
     }
}

bool isLeapYear(int year) {
     // Return if it is or isn't a leap year
     return year % 400 == 0 || (year % 4 == 0 && year %100 != 0);
}

int getStartDay(int year, int month) {
    // Get total number of days since 1-1-1800
    int startDay1800 = 3;
    int totalNumberOfDays = getTotalNumberOfDays(year, month);
    
    //Return the start day
    return (totalNumberOfDays + startDay1800) % 7;
}

int getTotalNumberOfDays(int year, int month) {
    int total = 0;
    
    // Calculate all days since 1800 to user's year
    for (int i = 1800; i < year; i++)
        if (isLeapYear(i))
            total = total+ 366;
        else
            total = total + 365;
    // Add days from start of user's year (Jan 1) to user's month
    for (int i = 1; i < month; i++)
        total = total + getNumberOfDaysInMonth(year, i);
    
    return total;
}

int getNumberOfDaysInMonth(int year, int month) {
    if (month == 1 || month == 3 || month == 5 || month == 7 ||
       month == 8 ||month == 10 ||month == 12)
       return 31;
    if (month == 4 ||month == 6 ||month == 9 ||month == 11)
       return 30;
    if (month == 2) return isLeapYear(year) ? 29 : 28;
    
}
       

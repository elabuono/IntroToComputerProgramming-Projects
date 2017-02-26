/*
Erica LaBuono
Project #2
PrimeNumber.cpp
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int NUMBER_OF_PRIMES = 50; //constant set of primes to display
    const int NUMBER_OF_PRIMES_PER_LINE = 10; //constant display for prime numbers per line
    
    int count = 0; // count number of prime numbers tested
    int number = 2; // test for primeness

    cout << "The first 50 prime numbers are: \n";
    
    // Start finding the number of primes
    while (count < NUMBER_OF_PRIMES) {
          bool isPrime = true; //assume the number is prime first
          
          for (int divisor = 2; divisor <= number/2; divisor++) {
              if (number % divisor == 0) {
                         isPrime = false;
                         break; //set isprime to false and exit loop
              }
          }
          
          if (isPrime) {
             count++;
             
             if (count % NUMBER_OF_PRIMES_PER_LINE == 0)
                cout << setw(4) << number << endl;
             else
                 cout << setw(4) << number;
          }
          
          number++;
    }
    return 0;
}

//Version 1.1.1
//Made by: Thijs Tops
//Licence: Beerware, but i prefere IceTea!

#include <iostream>

using namespace std;

const int PRIMES[] = { 2,3,5,7,9,11,13,17,19,21,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281,283,293,307,311,313,317,331,337,347,349,353,359,367,373,379,383,389,397,401,409,419,421,431,433,439,443,449,457,461,463 };
const int highestPrimeKnown = 463;
int primesOut[] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
int userInput;
int userInput_old;
int control;
int i = 0;
bool onePrime = false;

int main() {

	
	bool reachedEnd = false;
	onePrime = false;
	control = 0;
	while (true) {
		
		i = 0;
		reachedEnd = false;
		while (!reachedEnd)
		{
			primesOut[i] = 0;
			if (PRIMES[i] == highestPrimeKnown) {
				reachedEnd = true;
				break;
			}
			i++;
		}
		i = 0;

		reachedEnd = false; 

		for each (int toZero in primesOut)
		{
			toZero = 0;
		}
		cout << "Give the number i need to return in primes: ";
		cin >> userInput;
		userInput_old = userInput;

		
		while (!reachedEnd) {

			bool done = false;
			while (!done) {

				int temp;

				temp = userInput / PRIMES[i];

				if (temp*PRIMES[i] != userInput) {
					done = true;
					if (primesOut[i] != 0) {
						cout << PRIMES[i] << " * " << primesOut[i] << endl;
						control += PRIMES[i] * primesOut[i];
					}
				}
				else {
					primesOut[i]++;
					userInput = temp;
					onePrime = true;
				}

			}
			if (PRIMES[i] == highestPrimeKnown) {
				reachedEnd = true;
				break;
			} 
			i++;
		}
		if (!onePrime)
			cout << "It might be a bigger prime then i know of!\n\n";

		else if (control != userInput_old)
			cout << "Its not correct, there is a prime factor bigger then im programmed for!\n\n";

		system("pause");
		system("cls");
	}

}

//Version 1.1
//Made by: Thijs Tops
//Licence: Beerware, but i prefere IceTea!

#include <iostream>
using namespace std;

const int PRIMES[] = { 2,3,5,7,9,11,13,17,19,21,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173 };
int primesOut[] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
int userInput;
int i = 0;

int main() {

	
	bool reachedEnd = false;

	while (true) {
		
		i = 0;
		reachedEnd = false;
		while (!reachedEnd)
		{
			primesOut[i] = 0;
			if (PRIMES[i] == 173) {
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

		
		while (!reachedEnd) {

			bool done = false;
			while (!done) {

				int temp;

				temp = userInput / PRIMES[i];

				if (temp*PRIMES[i] != userInput) {
					done = true;
					if (primesOut[i] != 0) {
						cout << PRIMES[i] << " * " << primesOut[i] << endl;
					}
				}
				else {
					primesOut[i]++;
					userInput = temp;
				}

			}
			if (PRIMES[i] == 173) {
				reachedEnd = true;
				break;
			}
			i++;
		}

		system("pause");
		system("cls");
	}

}


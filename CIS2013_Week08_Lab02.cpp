#include <iostream>
#include <fstream>

using namespace std;

int main () {
	int number;
	int one, two, three, four, five;
	char cont = 'y';
	
	// Inputs/ prints ready numbers from the file
	ifstream in_a;
	
	in_a.open ("numbers.dat");
	if(in_a.fail()) {
		cout << "Something went wrong with numbers.dat";
		exit(1);
	}
	// Puts out numbers from the file (in which numbers already are situated) 
	in_a >> one >> two >> three >> four;
	in_a >> five;
	
	cout << "Add our previous numbers from " << one << " to " << five << endl;
	cout << "Numbers total to: " << (one + two + three + four) << endl;
	cout << "And our character is:" << five<< endl;
	
	in_a.close();
	return 0;
	
	}
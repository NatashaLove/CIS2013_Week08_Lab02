#include <iostream>
#include <fstream>

using namespace std;

int main () {
	int number=0;
	char cont = 'y';
	ifstream in_a;
	
	in_a.open ("numbers.dat");
	if(in_a.fail()) {
		cout << "Something went wrong with numbers.dat";
		exit(1);
	}
	in_a >> one >> two >> three >> four;
	cout << "Our previous numbers are " << one << " and ";
	cout << two << " and " << three << " not to forget ";
	cout << four;
	
	in_a.close();
	return 0;
	
	}
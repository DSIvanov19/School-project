#include <iostream>
using namespace std;
void printText(int answer, int total) {
	if (answer == total) {
		cout << "Correct answer!" << endl;
	}
	else {
		cout << "Wrong answer, please try again!" << endl;
	}
}

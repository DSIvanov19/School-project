#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	int choice, v1, v2, ans, total;

	srand(time(0));
	v1 = rand() % 100;
	v2 = rand() % 100 + 1;

	do
	{
		cout << "-- Menu --" << endl;
		cout << "1: Add" << endl;
		cout << "2: Subtract" << endl;
		cout << "3: Multiply" << endl;
		cout << "4: Divide" << endl;
		cout << "0: Exit" << endl;
		cout << "-- enter your choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "What is " << v1 << " + " << v2 << "? ";
			cin >> ans;
			total = v1 + v2;

			if (ans == v1 + v2) {
				cout << "Correct answer" << endl;
			}
			else {
				cout << "Wrong answer, please try again" << endl;
			}
			return 1;



		case 2:
			cout << "What is " << v1 << " - " << v2 << "? ";
			cin >> ans;
			total = v1 - v2;

			if (ans == v1 - v2) {
				cout << "Correct answer!" << endl;
			}
			else {
				cout << "Wrong answer, please try again!" << endl;
			}
			return 1;


		case 3:
			cout << "What is " << v1 << " * " << v2 << "? ";
			cin >> ans;
			total = v1 * v2;

			if (ans == v1 * v2) {
				cout << "Correct answer!" << endl;
			}
			else {
				cout << "Wrong answer, please try again!" << endl;
			}
			return 1;


		case 4:
			cout << "What is " << v1 << " / " << v2 << "? ";
			cin >> ans;
			total = v1 / v2;

			if (ans == v1 / v2) {
				cout << "Correct answer!" << endl;
			}
			else {
				cout << "Wrong answer, please try again!" << endl;
			}
			return 1;



		default:
			cout << "You chose to exit." << endl;
		}
	} while (choice != 0);

	return 0;
}
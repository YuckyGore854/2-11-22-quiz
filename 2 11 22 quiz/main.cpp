#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void firstProgram();
void secondProgram();
double circleArea(double radius);
void thirdProgram();

int main() {
	int input = -1;

	while (input != 0) {
		cout << "Which program would you like to run, the for loop program(1), the circle area program(2), or the vector program?(3)" << endl;
		cin >> input;
		switch (input) {
		case 1:
			firstProgram();
			break;
		case 2:
			secondProgram();
			break;
		case 3:
			thirdProgram();
			break;
		default:
			cout << "something went wrong???" << endl;
			input = 0;
			break;
		}
	}
}

void firstProgram() {
	for (int i = 60; i > -21; i -= 5) {
		cout << i << " ";
	}
	cout << endl;
	int num = 60;
	while (num > -21) {
		cout << num << " ";
		num -= 5;
	}
	cout << endl;
}

void secondProgram() {
	int input = 1;
	cout << "Press 0 to quit second program." << endl;
	while (input != 0) {
		cout << "Enter a radius: " << endl;
		cin >> input;
		cout << "The area of that circle is: " << circleArea(input) << endl;
	}
}

double circleArea(double radius) {
	return 3.14159265358979323 * radius * radius;
}

void thirdProgram() {
	vector<int>vicVin;
	bool hasFive = false;
	int input = 0;
	do {
		cout << "Enter a number, 0 to stop entering numbers" << endl;
		cin >> input;
		vicVin.push_back(input);
	} while (input != 0);

	sort(vicVin.begin(), vicVin.end());
	
	for (int i = 0; i < vicVin.size(); i++) {
		cout << vicVin[i] << " ";
		if (vicVin[i] == 5)
			hasFive = true;
	}
	cout << endl;
	if (hasFive)
		cout << "The vector has the number 5 in it." << endl;
	else if (!hasFive)
		cout << "The vector doesn't have the number 5 in it" << endl;
	else
		cout << "error???!" << endl;

	if (vicVin.size() > 3) {//wouldn't wanna shrink a vector to the point of overflow, that would be bad
		vicVin.pop_back();
		vicVin.pop_back();
		vicVin.pop_back();
	}
	for (int i = 0; i < vicVin.size(); i++) {
		cout << vicVin[i] << " ";
	}
	cout << endl;
}
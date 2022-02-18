//Programmer:Christoforos Chari
#include<iostream>
using namespace std;

void menu() {
	cout << "1) Draw a horizontal line";
	cout << "\n2)Draw a vertical line";
	cout << "\n3)Draw a square";
	cout << "\n4)Draw a rectangle";
	cout << "\n5)Exit";
	cout << "\nEnter your choise ";
}
void drawHorizontalLine(const int length, const char ch) {

	for (int i = 0; i < length; i++) {
		cout << ch;

	}
}

void drawVerticalLine(const int height, const char ch) {
	for (int i = 0; i < height; i++)
		cout << ch << endl;
}

void drawSquare(const int size, const char ch) {
	int height = size; int length = size;
	for (int i = 1; i <= height; i++)
	{
		for (int j = 1; j <= length; j++)
		{
			if (i == 1 || i == height || j == 1 || j == length)
			{
				cout << ch;
			}
			else
			{
				cout << " ";
			}
		}
		cout << "\n";
	}

}




void drawRectangle(const int height, const int length, const char ch) {

	for (int i = 1; i <= height; i++)
	{
		for (int j = 1; j <= length; j++)
		{
			if (i == 1 || i == height || j == 1 || j == length)
			{
				cout << ch;
			}
			else
			{
				cout << " ";
			}
		}
		cout << "\n";
	}

}

int main() {
	int choise, num, num1;
	char ch;

	do {
		menu();
		cin >> choise;
		switch (choise) {
		case 1:
			cout << "\nEnter the length number:";
			cin >> num;
			cout << "\nEnter the charater:";
			cin >> ch;
			drawHorizontalLine(num, ch);
			cout << endl;
			break;
		case 2:
			cout << "\nEnter the height number:";
			cin >> num;
			cout << "\nEnter the charater:";
			cin >> ch;
			drawVerticalLine(num, ch);
			cout << endl;
			break;

		case 3:

			cout << "\nEnter the square size";
			cin >> num;
			cout << "\nEnter the character:";
			cin >> ch;
			drawSquare(num, ch);


			break;

		case 4:

			cout << "\nEnter the height size";
			cin >> num;
			cout << "\nEnter the length size";
			cin >> num1;
			cout << "\nEnter the character:";
			cin >> ch;
			drawRectangle(num, num1, ch);

			break;
		default:
			if (choise > 5) {
				cout << "\nThe choise is 1-5 try agin.\n";
			}

		}

	} while (choise != 5); {
		cout << "\nThankyou have a nice day";

	}


	return 0;
}
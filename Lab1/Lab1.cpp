//Programmer:Christoforos Chari
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void menu() {
	cout << "1)Draw a horizontal line";
	cout << "\n2)Draw a vertical line";
	cout << "\n3)Draw a square";
	cout << "\n4)Draw a rectangle";
	cout << "\n5)Draw a random shapes";
	cout << "\n6)Exit";
	cout << "\nEnter your choise ";
}
void drawHorizontalLine(const int length, const char ch) {
	cout << "Horizontal Line( " << length << ", " << ch << ")\n";
	for (int i = 0; i < length; i++) {
		cout << ch;

	}
}

void drawVerticalLine(const int height, const char ch) {
	cout << "Vertical Line( " << height << ", " << ch << ")\n";
	for (int i = 0; i < height; i++)
		cout << ch << endl;
}

void drawSquare(const int size, const char ch) {
	int height = size; int length = size;
	cout << "Square( " << size << ", " << ch << ")\n";
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
	cout << "Rectangle( "<<height<<", "<< length << ", " << ch << ")\n";
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

void drawRandomShapes(int numShapes) {
	for (int i = 0; i < numShapes; i++) {
		cout << "\nDraws randoms shapes\n";
		int ShapeType = 1 + rand() % 4;
		int height = 1 + rand() % 20;
		int length = 1 + rand() % 20;
		char sympol = rand() % 94;//33-126

		

			switch (ShapeType) {
			case 1:
				
				drawHorizontalLine(length, sympol);
				break;
			case 2:
				
				drawRectangle(height, length, sympol);
				break;
			case 3:
				
				drawSquare(length, sympol);
				break;
			case 4:
				
				drawVerticalLine(length, sympol);
				break;
			default :
				cout << "Wrong input";
		
			}

		
	}

}






int main() {
	const int MAX_ARRAY = 10;
	int choise, num, num1, tmp;
	char ch;
	srand(time(NULL));
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
		case 5:

			drawRandomShapes(MAX_ARRAY);

			break;
		}

	} while (choise != 6); {
		cout << "\nThankyou have a nice day";

	}
	
	
	
		return 0;
}

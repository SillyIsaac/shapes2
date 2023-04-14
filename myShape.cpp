/*
	Purpose:	this source drives the use of the Shape, Circle and Square classes
*/
#include "Shape.h"
#include "Circle.h"
#include "Square.h"

int main(void)
{
	string tempColour;
	double tempRadius;
	string tempColourTwo;
	double tempLength;


	cout << "Please enter the circle's colour." << endl;

	cin >> tempColour;

	cout << "Please input a radius." << endl;

	cin >> tempRadius;

	Circle* myCircle = new Circle(tempColour, tempRadius);

	cout << "Please enter the square's colour." << endl;

	cin >> tempColourTwo;

	cout << "Please input the square's side length." << endl;

	cin >> tempLength;

	Square* mySquare = new Square(tempColourTwo, tempLength);

	myCircle->Show();

	mySquare->Show();

	myCircle->~Circle();

	mySquare->~Square();

	return 0;
}
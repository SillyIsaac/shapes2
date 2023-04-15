#include "Circle.h"

///
/// \brief Creates a Circle object depending on the values given
/// \details <b>Details<b>
/// 
/// The Circle constructor creates a new Circle object through the values given 
/// 
/// \param <b>string<b> myColour - The colour of the shape 
/// \param <b>double<b> myRadius - The radius of the shape
/// \return Nothing due to it being a constructor
/// 
///        \see ~Circle()
///
Circle::Circle(string myColour, double myRadius) : Shape("Circle", myColour)
{
	if (myRadius >= 0)
	{
		radius = myRadius;
	}

	else
	{
		radius = 0;
	}
}


///
/// \brief Creates a Circle object depending on the values given
/// \details <b>Details<b>
/// 
/// This is the default Circle constructor
/// 
/// \return Nothing due to it being a constructor
/// 
///        \see ~Circle()
///
Circle::Circle() : Shape("Circle", "undefined")
{
	radius = 0.00;
}


///
/// \brief Deconstructor for object Circle
/// \details <b>Details<b>
/// 
/// A deconstructor for the object Circle after use. 
/// Prints output if deconstructed
/// 
/// \param nothing
/// \return Destroys Circle and returns nothing
/// 
///        \see Circle()
///
Circle::~Circle()
{
	cout << "The circle is broken ...\n" << endl;
}


///
/// \brief gets the radius
/// \details <b>Details<\b>
/// 
/// This method is called to retrieve the value of radius.
/// 
/// \return <b>double<\b> tempRadius - the value of radius.
///
double Circle::GetRadius(void)
{
	double tempRadius = radius;

	return tempRadius;
}


///
/// \brief mutator to set radius
/// \details <b>Details<\b>
/// 
/// Thismethod is called in order to set the radius data member for the circle shape.
/// 
/// \return <b>double<\b> myRadius - the desired radius
///
bool Circle::SetRadius(double myRadius)
{
	if (myRadius >= 0)
	{
		radius = myRadius;

		return true;
	}

	else
	{
		return false;
	}
}


///
/// \brief shows info
/// \details <b>Details<\b>
/// 
/// This method is called to display the name, colour, radius, circumfrence, and area of the circle
/// 
/// \return N/A
///
void Circle::Show(void)
{
	string tempName = GetName();

	string tempClour = GetColour();

	double tempRadius = GetRadius();

	cout << "\nShape Information\n" << endl;

	cout << "Name          : " + tempName << endl;

	cout << "Colour        : " + tempClour << endl;

	cout << "Radius        : " << tempRadius << endl;

	cout << "Circumfrence  : " << Perimeter() << endl;

	cout << "Area          : " << OverallDimension() << "\n" << endl;
}


///
/// \brief calculates dimension
/// \details <b>Details<\b>
/// 
/// This method is called to calculate the diameter of the circle.
/// 
/// \return <b>double<\b> tempDiameter - the diameter of the circle.
///
double Circle::OverallDimension(void)
{
	double tempDiameter = radius * 2;

	return tempDiameter;
}


///
/// \brief calculates perimeter
/// \details <b>Details<\b>
/// 
/// This method is called to calculate the circumfrance of the circle.
/// 
/// \return <b>double<\b> tempPerimeter - the perimeter of the cicle.
///
double Circle::Perimeter(void)
{
	double tempPerimeter = 2 * PI * radius;

	return tempPerimeter;
}


///
/// \brief calculates area
/// \details <b>Details<\b>
/// 
/// This method is called to calculate the area of the circle.
/// 
/// \return <b>double<\b> tempArea - the area of the shape
///
double Circle::Area(void)
{
	double tempArea = PI * radius * radius;

	return tempArea;
}

Circle Circle::operator+(const Circle& circle2)
{
	Circle addition(GetColour(), radius + circle2.radius);
	return addition;
}

Circle Circle::operator*(const Circle& circle2)
{

}

Circle Circle::operator=(const Circle& object)
{

}

Circle Circle::operator==(const Circle& object)
{

}
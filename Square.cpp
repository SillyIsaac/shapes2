#include "Square.h"


///
/// \brief Creates a Square object depending on the values given
/// \details <b>Details<b>
/// 
/// The Square constructor creates a new Square object through the values given 
/// 
/// \param <b>string<b> myColour - The colour of the shape 
/// \param <b>double<b> mySidelength - The length of one side of the shape
/// \return Nothing due to it being a constructor
/// 
///        \see ~Square()
///
Square::Square(string myColour, double mySideLength) : Shape("Sqaure", myColour)
{
    if (mySideLength >= 0)
    {
        sideLength = mySideLength;
    }

    else
    {
        sideLength = 0;
    }
}


///
/// \brief Creates a Square object depending on the values given
/// \details <b>Details<b>
/// 
/// This is the default Square constructor
/// 
/// \return Nothing due to it being a constructor
/// 
///        \see ~Circle()
///
Square::Square() : Shape("Square", "undefined")
{
    sideLength = 0;
}


///
/// \brief Deconstructor for object Square
/// \details <b>Details<b>
/// 
/// A deconstructor for the object Sqaure after use. 
/// Prints output if deconstructed
/// 
/// \param nothing
/// \return Destroys Square and returns nothing
/// 
///        \see Square()
///
Square::~Square()
{
    cout << "The square is squished...\n" << endl;
}


///
/// \brief gets sideLength data value
/// \details <b>Details</b>
/// 
/// This function is called to return a value which represents the square's sideLength data member.       
/// 
/// \return Returns the sideLength value stored in tempSideLength
///
double Square::GetSideLength(void)
{
    double tempSideLength = sideLength;

    return tempSideLength;
}


///
/// \brief calculates perimeter
/// \details <b>Details</b>
/// 
/// This virtuaL function is called to return a perimeter value for the square.
/// 
/// \return 
///
double Square::Perimeter(void)
{
    double perimeter = 0;

    perimeter = sideLength * 4;

    return perimeter;
}


///
/// \brief calculates area
/// \details <b>Details</b>
/// 
/// This virtual function is called to calculate the area of the square
/// 
/// \return Returns the area varible.
///
double Square::Area(void)
{
    double area = 0;

    area = sideLength * sideLength;

    return area;
}


///
/// \brief shows values
/// \details <b>Details</b>
/// 
/// This Function is called to show the current colour, name, side length, perimeter, and area of the square object.
/// 
/// \return N/A
///
void Square::Show(void)
{
    string tempName = GetName();

    string tempColour = GetColour();

    double tempSideLength = GetSideLength();

    cout << "\nShape Information\n" << endl;

    cout << "Name              : " << tempName << endl;

    cout << "Colour            : " << tempColour << endl;

    cout << "Side-Length       : " << tempSideLength << endl;

    cout << "Perimeter         : " << Perimeter() << endl;

    cout << "Area              : " << Area() << "\n" << endl;
}


///
/// \brief sets sideLength value
/// \details <b>Details</b>
/// 
/// This method is called in order to mutate the sideLenth data member.
/// 
/// \param <b>double</b> myLength - the desired length.
/// 
/// \return Bool indicating success or failure.
///
bool Square::SetSideLength(double myLength)
{
    if (myLength >= 0)
    {
        sideLength = myLength;

        return true;
    }

    else
    {
        return false;
    }
}


///
/// \brief calculates overall dimension
/// \details <b>Details</b>
/// 
/// This method is called in order to calculate the overall size of the square.
/// 
/// \return s variable indicating overall size.
///
double Square::OverallDimension(void)
{
    double s = sideLength;

    return s;
}
#pragma once
#include "Shape.h"

///
///\class Square:
///
///\brief The Square class is to mimic the properties of a square
/// 
/// Name: Square
/// Function: To mimic the properties of a square
/// Square contains: colour and side length
/// Colour: The colour of the shape
/// Side length: the length of one side of the square
/// 
/// Data members
/// string colour - colour of shape
/// double sideLength - the length of one side
///

class Square : public Shape
{
private:
    double sideLength;

public:
    /* ------------- CONSTRUCTORS ----------- */

    Square(string myColour, double mySideLength);
    Square();

    /* -------------- DESTRUCTOR ------------ */

    ~Square();

    /* -------------- ACCESSOR -------------- */

    double GetSideLength(void);

    /* --------------  MUTATOR   ------------ */

    bool SetSideLength(double myLength);

    /* --------------- METHODS -------------- */

    virtual double Perimeter(void);
    virtual double Area(void);
    virtual double OverallDimension(void);
    void Show(void);
};
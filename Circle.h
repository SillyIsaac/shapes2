#pragma once
#include "Shape.h"

///
///\class Circle:
///
///\brief The Square class is to mimic the properties of a Circle
/// 
/// Name: Circle
/// Function: To mimic the properties of a Circle
/// Circle contains: colour and radius
/// Colour: The colour of the shape
/// radius: the radius of the circle
/// 
/// Data members
/// string colour - colour of shape
/// double radius - the radius of the cricle
///
class Circle : public Shape
{
private:
    double radius;


public:
    /* ------------- CONSTRUCTORS ----------- */

    Circle(string myColour, double myRadius);
    Circle();

    /* -------------- DESTRUCTOR ------------ */

    ~Circle();

    /* -------------- ACCESSOR -------------- */

    double GetRadius(void);

    /* --------------  MUTATOR   ------------ */

    bool SetRadius(double myradius);

    /* --------------- METHODS -------------- */

    void Show(void);
    virtual double OverallDimension(void);
    virtual double Area(void);
    virtual double Perimeter(void);


    Circle operator+(const Circle& circle2);
    Circle operator*(const Circle& circle2);
    Circle operator=(const Circle& circle2);
    Circle operator==(const Circle& circle2);
};
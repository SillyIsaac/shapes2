#pragma once
#define MAX_NAME_LENGTH 50
#define MAX_COLOUR_LENGTH 10
#define PI 3.1415926
#include <string.h>
#include <string>
#include <stdbool.h>
#include <iostream>
#include <ctype.h>


using namespace std;

///
///\class Shape:
///
///\brief The Square class is to mimic the properties of shapes
/// 
/// Name: Shape
/// Function: To mimic the properties of shapes
/// Square contains: colour and name
/// Colour: The colour of the shape
/// name: name of the shape (what type)
/// 
/// Data members
/// string colour - colour of shape
/// string name - name of the shape
///
class Shape
{
private:
    string name;
    string colour;


public:

    virtual double Perimeter() = 0;
    virtual double Area() = 0;
    virtual double OverallDimension() = 0;

    string GetName(void);
    string GetColour(void);

    Shape(string name, string colour);

    Shape();



    bool SetName(string newName);
    bool SetColour(string newColour);

};
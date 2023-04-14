#include "Shape.h"


///
/// \brief Creates a Shape object depending on the values given
/// \details <b>Details<b>
/// 
/// The Shape constructor creates a new Shape object through the values given
/// 
/// \param <b>string<b> myColour - The colour of the shape 
/// \param <b>string<b> myName - The name of the shape
/// \return Nothing due to it being a constructor
/// 
///        \see ~Circle()
///
Shape::Shape(string myName, string myColour)
{
    if ((myName == "Circle") || (myName == "Square") || (myName == "Unknown"))
    {
        if (myName.length() <= 50)
        {
            name = myName;
        }

        else
        {
            name = "Unknown";
        }
    }

    else
    {
        name = "Unknown";
    }

    if ((myColour == "red") || (myColour == "green") || (myColour == "blue") || (myColour == "yellow") || (myColour == "purple") || (myColour == "pink") || (myColour == "orange") || (myColour == "undefined"))
    {
        if (myColour.length() <= 10)
        {
            colour = myColour;
        }

        else
        {
            colour = "undefined";
        }
    }

    else
    {
        colour = "undefined";
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
Shape::Shape()
{
    name = "unknown";

    colour = "undefined";
}


///
/// \brief gets the name
/// \details <b>Details<\b>
/// 
/// This method accesses the name and return tempName containing the name
/// 
/// \return <b>string<\b> tempName - the name of the shape
///
string Shape::GetName(void)
{
    string tempName = name;

    return tempName;
}


///
/// \brief Gets the colour of the shape
/// \details <b>Details<\b>
/// 
/// This method accesses the colour and returns tempColour containing the colour
/// 
/// \return <b>string<\b> tempColour - the colour of the shape
///
string Shape::GetColour(void)
{
    string tempColour = colour;

    return tempColour;
}


///
/// \brief Sets the name of the shape
/// \details <b>Details<\b>
/// 
/// This method sets the name of the shape depending on the shape chosen
/// 
/// \return <b>boolean<\b> true/false - if errors occure or not
///
bool Shape::SetName(string newName)
{
    if ((newName == "Circle") || (newName == "Square"))
    {
        name = newName;

        return true;
    }

    else
    {
        return false;
    }
}


///
/// \brief Sets the colour of the shape
/// \details <b>Details<\b>
/// 
/// This method sets the colour of the shape depending on the colour chosen
/// 
/// \return <b>bool<\b> tempColour - true/false depending if there are errors or not
///
bool Shape::SetColour(string newColour)
{
    if ((newColour == "red") || (newColour == "green") || (newColour == "blue") || (newColour == "yellow") || (newColour == "purple") || (newColour == "pink") || (newColour == "orange"))
    {
        colour = newColour;

        return true;
    }

    else
    {
        return false;
    }
}
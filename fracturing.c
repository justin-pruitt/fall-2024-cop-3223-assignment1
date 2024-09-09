//********************************************************
// fracturing.c
// Author: Justin Pruitt
// Date: 9/8/24
// Class: COP 3223C, Professor Parra
// Purpose: This program calculates the various values of 
// circles such as diameter, perimeter, and area. 
// Input: 5 sets of coordinates in the order: x1, x2, y1, y2.
//
// Output: (to the command line) Calculations of circles 
// based on values input.
// //********************************************************

#include <stdio.h>
#include <math.h>

#define PI 3.14159

double distanceCalculations() // The ACTUAL calculations for distance
{
    // Initialize variables for coordinates
    int x1 = 0;
    int x2 = 0;
    int y1 = 0;
    int y2 = 0;

    // Scan for inputs and print what coordinates were input
    scanf(" %d%d", &x1, &y1);
    scanf(" %d%d", &x2, &y2);
    printf("Point #1 entered: x1 = %d; y1 = %d \n", x1, y1);
    printf("Point #2 entered: x2 = %d; y2 = %d \n", x2, y2);

    // Calculate distance of both coordinates
    int distance_x = x2 - x1;
    int distance_y = y2 - y1;

    double distance = sqrt(pow(distance_x, 2) + pow(distance_y, 2));

    return distance;
}

double calculateDistance() // Calls for distance calculations and prints result
{
    // Call the distanceCalculations function and bring in the value of the distance
    double distance = distanceCalculations();
    printf("The distance between the two points is %f\n", distance);

    return distance; // I would rate this a 3.0 due to the trickery of finding a way to calculate the distance without it printing in every other function.
}

double calculatePerimeter()
{
    // Call distanceCalculations function in order to complete perimeter calculation
    double diameter = distanceCalculations();

    // Calculate the perimeter and print result
    double perimeter = PI * diameter;
    printf("The perimeter of the city encompassed by your request is %f\n", perimeter);

    return 1.0; // Simple enough to implement on its own
}

double calculateArea()
{
    //Area = pi*radius^2
    double diameter = distanceCalculations();

    //Find radius by halving diameter
    double radius = diameter / 2;

    // Calculate area then print result
    double area = PI * pow(radius,2); // Area = pi * r^2
    printf("The area of the city encompassed by your request is %f\n", area);

    return 1.0; // Also very simple on its own
}

double calculateWidth()
{
    // Initialize variables for coordinates
    int x1 = 0;
    int x2 = 0;
    int y1 = 0;
    int y2 = 0;

    // Scan for inputs and print what coordinates were input
    scanf(" %d%d", &x1, &y1);
    scanf(" %d%d", &x2, &y2);
    printf("Point #1 entered: x1 = %d; y1 = %d \n", x1, y1);
    printf("Point #2 entered: x2 = %d; y2 = %d \n", x2, y2);

    // Calculate width of the shape and print
    double width = fabs(x2 - x1);
    printf("The width of the city encompassed by your request is %f\n", width);

    return 5.0; // Could not for the life of me figure out a way to do this function without copy pasting the entirety of the user inputs. Definitely where I spent most of my time.
}

double calculateHeight()
{
    // Initialize variables for coordinates
    int x1 = 0;
    int x2 = 0;
    int y1 = 0;
    int y2 = 0;

    // Scan for inputs and print what coordinates were input
    scanf(" %d%d", &x1, &y1);
    scanf(" %d%d", &x2, &y2);
    printf("Point #1 entered: x1 = %d; y1 = %d \n", x1, y1);
    printf("Point #2 entered: x2 = %d; y2 = %d \n", x2, y2);

    // Calculate height of the shape and print result
    double height = fabs(y2 - y1);
    printf("The height of the city encompassed by your request is %f\n", height);

    return 5.0; // This function would ruin any plans I had of reducing the repeating done in calculateWidth. 
}

int main(int argc, char** argv)
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}
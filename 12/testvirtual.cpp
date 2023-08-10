#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"


/*
	   DIAGRAM OF CLASS RELATIONS
	   
	   				AREA
					|  |
				    |  |
			   CIRCLE RECTANGLE
			   	  |		  |
				  |		  |
				RING	SQUARE


*/


/*
	Explanations for numbered points:
	(1) -> The program creates an array of num_obj Area type pointers
	(2) -> The integer index used for looping through the 
	       list at (7) is initialized with 0
	(3) -> The double sum_area that holds the sum of all the areas
		   is initialized with 0.0
	(7) -> A while loop that goes through the array of Area type pointers
	(8) -> The program assigns the return value of calcArea method 
	       that is called on the current instance which is referred to 
		   by the address found on the current index of the array of Area type 
		   pointers, then it is incremented by 1 and add value of 
		   area to sum_area
	(9) -> The value of sum_area (the sum of all the areas of the instances
		   created before) is printed into stdout using cout  
*/


const int num_obj = 25;
int main() {
	Area *list[num_obj];						// (1)
	int index = 0;								// (2)
	double sum_area = 0.0;						// (3)
	double sum_perimeter = 0.0;

    srand(static_cast<unsigned int>(time(0)));
    const char* colors[4] = {"RED", "BLACK", "VIOLET", "BLUE"};
	for (int i = 0; i < num_obj; i++) {

		// rand() % 4 produces a number between 0 and 3 inclusive
		int rchoice = rand() % 4;
		int rcolor  = rand() % 4;

		// rand() % 96 + 5 produces a number between 5 and 100 inclusive
		switch (rchoice) {
			case 0 :
				{
					int rradius = rand() % 96 + 5;
					list[i] = new Circle(colors[rcolor], rradius);
				}
				break;
			case 1 :
				{
					int roradius = rand() % 96 + 5;
					int riradius = rand() % 96 + 5;
					list[i] = new Ring(colors[rcolor], roradius, riradius);
				}
				break;
			case 2 :
				{
					int rlength = rand() % 96 + 5;
					int rwidth  = rand() % 96 + 5;
					list[i] = new Rectangle(colors[rcolor], rlength, rwidth);
				}
				break;
			case 3 :
				{
					int rside = rand() % 96 + 5;
					list[i] = new Square(colors[rcolor], rside);
				}
				break;
		}
	}

	while (index < num_obj) {					// (7)
		(list[index])->getColor();				
		double area = list[index++]->calcArea();// (8)
		sum_area += area;
	}
	cout << "\nThe total area is "
			<< sum_area << " units " << endl;	// (9)

	index = 0;
	while (index < num_obj) {					
		(list[index])->getColor();				
		double perimeter = list[index++]->calcPerimeter();
		sum_perimeter += perimeter;
	}
	cout << "\nThe total perimeter is "
			<< sum_perimeter << " units " << endl;	
	return 0;

}

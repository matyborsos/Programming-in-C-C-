/* CH-230-A
   a12 p1.cpp
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

/*
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape {			// base class
	protected:   			// private access modifier: changed to protected
		string name;   // every shape will have a name
	public:
		Shape(const string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name
};

class CenteredShape : public Shape {  // inherits from Shape
	protected:
		double x,y;  // the center of the shape
	public:
		CenteredShape(const string&, double, double);  
		// usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	
		// moves the shape, i.e. it modifies it center
};

class RegularPolygon : public CenteredShape { 
	// a regular polygon is a centered shape with a number of edges
	protected:
		int EdgesNumber;
	public:
		RegularPolygon(const string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
};

class Circle : public CenteredShape {  
	// a Circle is a shape with a center and a radius
	protected:
		double Radius;
	public:
		Circle(const string&, double, double, double);
		Circle();
		Circle(const Circle&);
};

class Hexagon : public RegularPolygon { 
	// a hexagon is a regular polygon with a side and a color
	private:
		int side;
		string color;
	public:
		Hexagon(const string&, double, double, int, int, const string&);
		// builds a hexagon with all the properties 
		Hexagon();                 // empty constructor
		Hexagon(const Hexagon&);   // copy constructor
        ~Hexagon();				   // desctructor

		// setter methods
        void setSide(int newside);
        void setColor(const string& newcolor);

        // getter methods
        int getSide() const;
        string getColor() const;

        // service methods
        int Perimeter() const;   // computes the perimeter of the hexagon
        double Area() const;     // computes the area of the hexagon


};

#endif

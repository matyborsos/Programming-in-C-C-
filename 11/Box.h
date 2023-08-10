/* CH-230-A
   a11 p1.cpp
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/


class Box {

private:  // internal implementation is hidden
    double height;
    double width;
    double depth;

public:
    Box();                    // empty constructor
    Box(double, double, double); // constructor that sets the data members
    Box(const Box& B);        // copy constructor
    ~Box();                   // destructor

    // setter methods
    void setHeight(double newheight);
    void setWidth(double newwidth);
    void setDepth(double newdepth);

    // getter method
    double getHeight();
    double getWidth();
    double getDepth();

    double volume(Box & nr);
};

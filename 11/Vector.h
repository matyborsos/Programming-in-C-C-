/* CH-230-A
   a11 p6.cpp
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#ifndef VECTOR_H
#define VECTOR_H
class Vector {
    private:
        double *pointer;
        int size;
    public:
        Vector(double *newpointer, int newsize);
        Vector();
        Vector(const Vector&);
        ~Vector();

        // setter methods
        void setPointer(double *newpointer);
        void setSize(int newsize);

        // getter methods
        double* getPointer() const;
        int getSize() const;

        // service methods
        double norm() const;   // computes the norm of the vector
        Vector add(const Vector& added) const;  
            // computes the sum of two vectors
        Vector subtract(const Vector& subtracted) const;
            // computes the subraction of a vector from another
        double scalarProduct(const Vector& sndvector) const;
            // computes the scalar product of two vectors
        
        void print() const;
};
#endif
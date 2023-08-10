/* CH-230-A
   a11 p6.cpp
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <iostream>
#include "Vector.h"

using namespace std;

int main(int argc, char** argv) {
    double *fstComponents = new double[5]{1, 2, 3, 4, 5};
    double *sndComponents = new double[5]{3, 7, 8, 1, 1};
    double *fthComponents = new double[5]{1, 6, 4, 2, 3};

    // One instance created using the constructor without parameters
    Vector sndInstance;
    sndInstance.setPointer(sndComponents);
    sndInstance.setSize(5);

    // An instance created using the copy constructor
    Vector trdInstance(sndInstance);

    // The rest of the instances created using the parametric constructor
    Vector fstInstance(fstComponents, 5);
    Vector fthInstance(fthComponents, 5);

    cout << "The norm of the second vector: " << sndInstance.norm() << endl;

    cout << "The Scalar Product of the second and fourth vector: ";
    cout << sndInstance.scalarProduct(fthInstance) << endl;

    cout << "The Sum of the second and fourth vector: ";
    (sndInstance.add(fthInstance)).print();

    cout << "The Difference of the second and fourth vector: ";
    (sndInstance.subtract(fthInstance)).print();

    return 0;
}

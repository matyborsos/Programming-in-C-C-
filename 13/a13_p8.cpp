/* CH-230-A
   a13 p8.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <iostream>

using namespace std;

class Motor {
    private:
        string Problem;
    public:
        Motor() 
        {
            // The program throws the exception inside the Motor's constructor
            Problem = "This motor has problems";
            cerr << "The exception caught in Motor class: " << Problem << endl;
            throw Problem;
        }
};

class Car {
    private:
        Motor *motor;
    public:
        Car() 
        {
            // It initializes the motor iuside the Car's constructor
            motor = new Motor();
        }
};

class Garage {
    private:
        string problem = "The car in this garage has problems with the motor";
        Car *car;
    public:
        Garage() 
        {
            try 
            {
                // And then it iitializes a car 
                // and checks for any thrown exceptions
                car = new Car();
            }
            catch (string Exception) 
            {
                // Throw new string when catching exception from Motor
                throw problem;
            }
        }
};

int main() {

    try 
    {
        Garage SomeGarage;
    }
    catch (string Exception) 
    {
        cerr << "The exception caught in main: " << Exception << endl;
    }
    return 0;

}
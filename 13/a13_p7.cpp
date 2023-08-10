/* CH-230-A
   a13 p7.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <iostream>
#include <string>

using namespace std;

class OwnException : public exception {
    private:
        string MyException;
    public:
        // The function has a parametric constructor
        OwnException(string newexception) {
            (*this).MyException = newexception;
        }
        // and an overwrote what() method
        virtual const char* what() const noexcept {
            return "OwnException\n";
        }
};

void exceptionThrower(int input) {

    switch(input) {
        case 1:
            throw 'a';
            break;
        case 2:
            throw 2;
            break;
        case 3:
            throw true;
            break;
        default:
            throw OwnException("Default case exception");
            break;
    }
}

int main() {
    // The program looops to go through all possible cases 
    for (int i = 1; i < 5; i++) {
        try 
        {
            exceptionThrower(i);
        }
        catch (char error) {
            cerr << "The exception caught in main: " << error << endl;
        }
        catch (int error) {
            cerr << "The exception caught in main: " << error << endl;
        }
        catch (bool error) {
            cerr << "The exception caught in main: " << error << endl;
        }
        catch (OwnException& error) {
            cerr << "The exception caught in main: " << error.what() << endl;
        }
    }
    return 0;
}
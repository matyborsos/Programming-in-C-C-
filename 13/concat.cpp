/*
    CH-240-A
    a13-p3.cpp
    Matheas-Roland Borsos
    m.borsos@jacobs-univeerity.de
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char **argv) {

    // variable declaration
    int n;
    char ch;
    string inputfile;

    // reads from the standart input the number of files
    cin >> n;

    // opens the output file, while also deleting the old if present
	ofstream out("concatn.txt", ios::trunc);
	if (!out.good()) { // checks if it didn't open successfully
		cerr << "Error opening output file" << endl;
		exit(1);
	}

    // the program gets the inputs,
    // it reads the name of the n input files
    int i;
    for( i = 0; i < n; i++ )
    {
        cin >> inputfile;
        // opens the input file
        ifstream in(inputfile);
	    if (!in.good()) { // checks if it didn't open successfully
		    cerr << "Error opening input file " << endl;
		    exit(2);
	    }
        // copies the content of the input file inside the output file
        if (in.is_open() && out.is_open()) {
            while (in.get(ch))
                out << ch;
                // inserts each character from the input file into the output file
        } else cout << "One of the files wasn't be opened!";

        // goes to a new line to separate the contents of the different files 
        // inside the resulting file
        out << '\n';

        // closes this input file
        in.close();
    }
    
    // in the end, the program closes the output file
	out.close();

    return 0;

}

/*
    CH-240-A
    a13-p1.cpp
    Matheas-Roland Borsos
    m.borsos@jacobs-univeerity.de
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char **argv) {

    // variable declaration
    char ch;
    string inputfile;
    string outputfile;
    char ext = '.';
    int pos = 0;

    // the program gets the input,
    // it reads the name of the input file
    cin >> inputfile;

    // loops trough the input file name, read from the keyboard
    // until it finds the ., that marks the beginning of the extension
    for(int i = 0; i < 20; i++)
        if(inputfile[i] == ext) {
            pos = i;
            break;
        }

    // it then creates the name of the file
    outputfile = inputfile.substr(0, pos) + "_copy"
                    + inputfile.substr(pos, inputfile.length());

    // opens the input file
    ifstream in(inputfile);
	if (!in.good()) { // checks if it didn't open successfully
		cerr << "Error opening input file " << endl;
		exit(1);
	}

    // opens the output file, while also deleting the old if present
	ofstream out(outputfile, ios::trunc);
	if (!out.good()) { // checks if it didn't open successfully
		cerr << "Error opening output file" << endl;
		exit(2);
	}

    // copies the content of the input file inside the output file
    if (in.is_open() && out.is_open()) {
        while (in.get(ch))
            out << ch;
            // inserts each character from the input file into the output file
    } else cout << "One of the files wasn't be opened!";

    // in the end, the program closes the files
	in.close();
	out.close();

    return 0;







}

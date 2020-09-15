//
// Created by justin on 2020/09/15.
//
#include <iostream>
#include <fstream>

void initCSV() {
    std::ofstream myFile("foo.csv");

    // Send data to the stream
    myFile << "Foo\n";
    myFile << "1\n";
    myFile << "2\n";
    myFile << "3\n";

    // Close the file
    myFile.close();
}

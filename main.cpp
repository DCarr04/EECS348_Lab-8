#include "matrix.hpp"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
    string file;
    cout << "Enter a file: ";
    cin >> file;
    ifstream myfile (file);

    return 0;
}

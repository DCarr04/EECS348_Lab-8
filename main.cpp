#include "matrix.hpp"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
    string file;
    string line;
    
    cout << "Enter a file: ";
    cin >> file;
    ifstream myfile (file);
    if (myfile.is_open()){
        while(getline(myfile, line)){
            Matrix myMatrix();
            if (line.size() == 1){
                int size = stoi(line);
                myMatrix(size);
            }
        }

    }

    return 0;
}

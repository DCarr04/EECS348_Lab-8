#include "matrix.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
    string file;
    string line;
    int rowCounter = 0;
    int data;
    int sizeTracker = 0;
    string preInt_data;
    cout << "Enter a file: ";
    cin >> file;
    ifstream myfile (file);
    vector<vector<int>> nums;


    if (myfile.is_open()){
        while(getline(myfile, line)){
            //Matrix myMatrix();
            if (line.size() == 1){
                int size = stoi(line);
                Matrix myMatrix(size);

            
            if(sizeTracker < size){
                if(line.size() == size){
                    for(int i = 0; i < size; i++){
                        preInt_data.push_back(line[i]);
                        data = stoi(preInt_data);
                        nums[rowCounter][i] = data;
                        preInt_data.pop_back();
                    }
                }
            }
            
            
            
        }

    }

    return 0;
}

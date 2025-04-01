#include "matrix.hpp"
#include <vector>
using namespace std;

// implementation of functions declared in matrix.hpp goes here
// function definitions for a class have their names prefixed with
// the class name and "::"

// e.g. for the constructor:

Matrix::Matrix(size_t N) {
    // initialize an empty NxN matrix
    size = N;
}

Matrix::Matrix(vector<vector<int>> nums){
    data = nums;
}

Matrix::~Matrix(){

}
// e.g. for a member function:

Matrix Matrix::operator+(const Matrix &rhs) const{
    //Matrix sum_Matrix(rhs.size)
}

void Matrix::set_value(size_t i, size_t j, int n){
    data[i][j] = n;
}

int Matrix::get_value(size_t i, size_t j) const{
    return data[i][j];
}

int Matrix::get_size() const{
    return size;
}

int Matrix::sum_diagonal_major() const{
    int total = 0;
    int rowCounter = size - 1;
    //int bottom_left = data[size - 1][0];

    for(int i = 0; i < size; i++){
        total += data[rowCounter][i];
        --rowCounter; 
    }
    return total;
    //int top
}

int Matrix::sum_diagonal_minor() const{
    int total = 0;
    int rowCounter = 0;

    for(int i = 0; i < size; i++){
        total += data[rowCounter][i];
        rowCounter++; 
    }
    return total;
}

void Matrix::swap_rows(size_t r1, size_t r2){
    vector<int> row1 = data[r1];
    data[r1] = data[r2];
    data[r2] = row1;
}

void Matrix::print_matrix() const {
    // print out the matrix
}

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

void Matrix::print_matrix() const {
    // print out the matrix
}

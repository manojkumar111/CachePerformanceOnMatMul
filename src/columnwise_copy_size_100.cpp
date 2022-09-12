#include <sstream>
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

void parsec_roi_begin()
{

}

void parsec_roi_end()
{

}

void columnwise_copy(int a[10][10], int rows, int cols) {
    int i, j;
   for(j=0; j<cols; ++j){
   	for(i=0;i<rows;++i){
   		cout<<a[i][j]<<" ";
	   }
   }
}


void printMatrix(int a[10][10], int rows, int cols) {
   cout<<"The matrix is:"<<endl;
   int i, j;
   for(i=0; i<rows; ++i) {
      for(j=0; j<cols; ++j)
      cout<<a[i][j]<<" ";
      cout<<endl;
   }
   cout<<endl;
}

int main (int argc, char* argv[]) {

    int rows = 10;
    int cols = 10;
    int matrix[10][10] = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
                          {11, 12, 13, 14, 15, 16, 17, 18, 19, 20}
                          {21, 22, 23, 24, 25, 26, 27, 28, 29, 30},
                          {31, 32, 33, 34, 35, 36, 37, 38, 39, 40},
                          {41, 42, 43, 44, 45, 46, 47, 48, 49, 50},
                          {51, 52, 53, 54, 55, 56, 57, 58, 59, 60}
                          {61, 62, 63, 64, 65, 66, 67, 68, 69, 70}
                          {71, 72, 73, 74, 75, 76, 77, 78, 79, 80}
                          {81, 82, 83, 84, 85, 86, 87, 88, 89, 90}
                          {91, 92, 93, 94, 95, 96, 97, 98, 99, 100}};
    printMatrix(matrix, rows, cols);
    parsec_roi_begin();
	columnwise_copy(matrix, rows, cols);
    parsec_roi_end();
	return 0;
}

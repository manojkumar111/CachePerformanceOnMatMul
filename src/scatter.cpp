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

void printMatrix(int a[15], int arr_size) {
	for(j=0;j<arr_size;j++)
	{
		cout<<a[j]<<" ";
	}
}

int main (int argc, char* argv[]) {

	int i,index;
	int input_array[15] = {3, 6, 9, 15, 18, 21, 3, 33, 39, 45, 18, 51, 54, 57, 15};

	int value_arr[5]={3,15,33,15,57};

	int index_arr[5]={1,4,9,12,13};

    int index_size = 5;
	parsec_roi_begin();
	for(i=0;i<index_size;i++)
	{
		index=index_arr[i];
		input_array[index]=value_arr[i];
	}
	parsec_roi_end();

	cout<<"Modified array after applying scatter \n";
	printMatrix(input_array, 15);
}

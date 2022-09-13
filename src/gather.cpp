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

void printArray(int a[9], int arr_size) {
	for(int j=0;j<arr_size;j++)
	{
		cout<<a[j]<<" ";
	}
	cout<<"\n";
}

int main (int argc, char* argv[]) {

	int input_array[9] = { 1,3,5,7,9,11,13,15,17};

	cout<<"Before gather array is: \n";
    printArray(input_array, 9);

	int index_array[5]={0,3,5,4,7};
	int dest_array[5];
	int index_size=5;
	parsec_roi_begin();
	for(int i=0;i<index_size;i++)
	{
		int ind = index_array[i];
		dest_array[i]=input_array[ind];
	}
	parsec_roi_end();

	cout<<"dest array after applying gather \n";
	for(j=0;j<5;j++)
	{
		cout<<dest_array[j]<<" ";
	}

}

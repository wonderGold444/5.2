#include "Header.h"
using namespace std;
int main ()
{
	int size = 12;
	int* arr = new int[size];
	for (int i = 0 ; i < size ; i++)
	{
		arr[i] = rand() % 12;
	}
	Print(arr, size);
	Sort(arr, size);
	cout << endl;
	Print(arr, size);

}
#include "Header.h"
using namespace std;
void Sort(int* arr,int size)
{
	int g = 0;
	for (int i = 0; i < size; i++)
	{
		if (g % 2 == 0)
		{
			swap(arr[i], arr[i + 1]);
		}
		g++;
	}
}
void Print(int *arr , int size)
{
	for (int i = 0 ; i < size ; i ++)
	{
		cout << arr[i] << "|";
	}
}
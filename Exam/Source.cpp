#include <iostream>
using namespace std;

void Print(int arr[], int size);
void shift_left(int arr[], int size, int shift);

#define tab "\t"
void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int arr[n] = { 0,1,2,3,4,5,6,7,8,9 };
	int shift;
	Print(arr, n);
	cout << "На какое количество элементво сдвинуть массив? "; cin >> shift;

	shift_left(arr, n, shift);
	Print(arr, n);

}
void Print(int arr[], int size)
{
	cout << endl << endl;;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl<<endl;
}

void shift_left(int arr[], int size, int shift)
{
	
	while (shift > 0)
	{
		int temp = arr[0];

		for (int i = 0; i < size - 1; i++)
		{
			arr[i] = arr[i + 1];
		}

		arr[size - 1] = temp;

		shift--;
	}
}
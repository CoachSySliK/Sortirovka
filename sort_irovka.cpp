#include <iostream>

using namespace std;

void sort(float *number, const int SIZE)
{
	for (int j = 0; j < SIZE - 1; j++)
	{
		for (int i = j + 1; i < SIZE; i++)
		{	
			if (number[i] > number[j])
				swap(number[i], number[j]);
		}
	}
}

int main(void)
{
	const int SIZE = 5;
	float number[SIZE] = {0.0f};

	cout << "Enter " << SIZE << " numbers:\n";
	for (int i = 0; i < SIZE; i++)
		cin >> number[i];
	cin.ignore(100, '\n');

	float *ptrnumber = number;

	sort(ptrnumber, SIZE);

	cout << "Resoult:\n";
	for (int i = 0; i < SIZE; i++)
		cout << number[i] << " ";
	cout << endl;

	return 0;
}
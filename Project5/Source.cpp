#include <iostream>

using namespace std;

int gh(int a, int k)
{
	int c = 0;
	int d = 0;
	for (int i = k; i > 0 ; i--) 
	{
		k--;
		c = (a % 10) * pow(10, k);
		d = d + c;
		a = a / 10;
	}

	return d;
}

void main()
{
	setlocale(LC_ALL, "Russian");
	int gh(int a, int k);
	int a, A, c;
	int k=1;
	cout << "введите число:\n";
	cin >> a;
	A = a;
	
	
	for (int i = 0; A > 1; i++)
	{
		A = A / 10;
		k++;
	}
	c = gh(a, k);

	if (k % 2 == 0) 
	{
		a = a / pow(10, (k / 2));
		c = c / pow(10, (k / 2));
	}
	else 
	{
		a = a / pow(10, ((k - 1) / 2));
		c = c / pow(10, ((k - 1) / 2));
	}
	if (a == c) 
	{
		cout << "число палиндром\n";
	}
	else 
	{
		cout << "число не палиндром\n";
	}
	system("pause");	
}




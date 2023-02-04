#include<iostream>
using namespace std;

#define MULTI_TABLE
//#define MULTI_TABLE_1

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef MULTI_TABLE

	int j;
	int i;
	for (int i = 1; i <= 10; i++)
	{
		for(int j=1;j<=10;j++)
		cout << j << "*" << i << "=" << j*i<<endl;
		cout << endl;
	}
	cout << endl;
#endif MULTI_TABLE

#ifdef MULTI_TABLE_1

	int Y;
	cout << "¬ведите число:"; cin >> Y;
	for (int i = 1; i <= 10; i++)
	{
		cout << Y << "*" << i << "=" << Y * i << endl;
		cout << endl;
	}
	cout << endl;

#endif MULTI_TABLE_1
}
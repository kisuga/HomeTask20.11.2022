#include<iostream>
using namespace std;

#define MULTI_PULTI

void main()
{
	setlocale(LC_ALL, "Russian");
	
#ifdef MULTI_PULTI
	cout << "Таблица умножения" << endl;
		for (int i = 1; i <= 11; i++)
	{
		for (int j = 1; j <= 11; j++)
		{
			cout << i << "*" << j << "=" << i * j;
			cout << endl;
		}
		cout << endl;
			}
#endif MULTI_PULTI


}